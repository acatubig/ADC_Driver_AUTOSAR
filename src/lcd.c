/*
 * lcd.c

 *
 *  Created on: 27 Aug 2024
 *      Author: ArgieCS
 */

#include "lcd.h"

// Delay function to create a delay in execution
void LCD_Delay(volatile uint32_t delay) {
    while (delay--);
}

// Enable pulse for the LCD
void LCD_EnablePulse(void) {
    SET_E();    // Set E high
    LCD_Delay(5000);
    RESET_E();  // Set E low
    LCD_Delay(5000);
}

// Function to send a byte to the LCD in 4-bit mode
void LCD_SendByte(uint8_t data, uint8_t isdata) {
    if (isdata == 0) {
        RESET_RS();  // Command mode
    } else {
        SET_RS();    // Data mode
    }

    LCD_Delay(500); // tAS

    // Set data pins
    if (data & 0x01) SET_D0(); else RESET_D0();
    if (data & 0x02) SET_D1(); else RESET_D1();
    if (data & 0x04) SET_D2(); else RESET_D2();
    if (data & 0x08) SET_D3(); else RESET_D3();
    if (data & 0x10) SET_D4(); else RESET_D4();
    if (data & 0x20) SET_D5(); else RESET_D5();
    if (data & 0x40) SET_D6(); else RESET_D6();
    if (data & 0x80) SET_D7(); else RESET_D7();

    LCD_EnablePulse();

    LCD_Delay(2000); // tEL
}

// Function to initialize the LCD
void LCD_Init() {
    // Enable clock for PORTD and PORTE
	PCC->PCCn[PCC_PORTB_INDEX] |= PCC_PCCn_CGC_MASK;
    PCC->PCCn[PCC_PORTD_INDEX] |= PCC_PCCn_CGC_MASK;
    PCC->PCCn[PCC_PORTE_INDEX] |= PCC_PCCn_CGC_MASK;

    // Configure the pins as GPIO
    PORTE->PCR[LCD_RS] = PORT_PCR_MUX(1); // Set PTE16 as GPIO
    PORTE->PCR[LCD_E]  = PORT_PCR_MUX(1); // Set PTE15 as GPIO
    PORTB->PCR[LCD_D0] = PORT_PCR_MUX(1); // Set PTB17 as GPIO
    PORTB->PCR[LCD_D1] = PORT_PCR_MUX(1); // Set PTB14 as GPIO
    PORTB->PCR[LCD_D2] = PORT_PCR_MUX(1); // Set PTB15 as GPIO
    PORTB->PCR[LCD_D3] = PORT_PCR_MUX(1); // Set PTB16 as GPIO
    PORTE->PCR[LCD_D4] = PORT_PCR_MUX(1); // Set PTE14 as GPIO
    PORTE->PCR[LCD_D5] = PORT_PCR_MUX(1); // Set PTE13 as GPIO
    PORTE->PCR[LCD_D6] = PORT_PCR_MUX(1); // Set PTE1 as GPIO
    PORTD->PCR[LCD_D7] = PORT_PCR_MUX(1); // Set PTD7 as GPIO

    LCD_Delay(1000);

    // Set pins as outputs
    PTE->PDDR |= (1 << LCD_RS) | (1 << LCD_E) | (1 << LCD_D4) | (1 << LCD_D5) | (1 << LCD_D6);
    PTB->PDDR |= (1 << LCD_D0) | (1 << LCD_D1) | (1 << LCD_D2) | (1 << LCD_D3);
    PTD->PDDR |= (1 << LCD_D7);

    // Initialize the LCD in 8-bit mode
    LCD_Delay(30000); 			// Wait for LCD to initialize

    // Function set: 8-bit, 2 line, 5x8 dots format
    LCD_SendByte(0x38, 0);  	// Function set: 8-bit mode, 2-line display, 5x8 dots

    LCD_Delay(10000);

    // Display ON/OFF control
    LCD_SendByte(0x0C, 0);  	// Display ON, Cursor OFF, Blink OFF

    LCD_Delay(10000);

    // Entry mode set
    LCD_SendByte(0x06, 0);  	// Entry mode set: Increment cursor, no display shift

    LCD_Delay(10000);

    LCD_Clear();  				// Clear the display
}

// Function to set the cursor position on the LCD
void LCD_SetCursor(uint8_t x, uint8_t y) {
    if (x < 40) {
        switch (y) {
            case 0: x += 0x80; break; // Line 1
            case 1: x += 0xC0; break; // Line 2
            //case 2: x += 0x94; break; // Line 3
            //case 3: x += 0xD4; break; // Line 4
        }
        LCD_SendByte(x, 0); // Send command to set cursor position
    }
}

// Function to print a string on the LCD
void LCD_WriteString(const char *msg) {
	while (*msg != '\0') {
	    LCD_SendByte(*msg, 1); // Send each character
	    msg++;
	}
}

void LCD_Clear(void) {
    // Send the clear display command (0x01)
    LCD_SendByte(0x01, 0);

    // Delay to allow the LCD to process the clear command
    LCD_Delay(20000);  // Adjust delay as needed for LCD
}

/*
 * lcd.h

 *
 *  Created on: 27 Aug 2024
 *      Author: ArgieCS
 */

#ifndef LCD_H
#define LCD_H

#include "S32K144.h"  // Device header for register definitions

// Pin definitions for the LCD
#define LCD_RS  16  // GPIO Port E, Pin 16
#define LCD_E   15  // GPIO Port E, Pin 15
#define LCD_D0  17  // GPIO Port B, Pin 17
#define LCD_D1  14  // GPIO Port B, Pin 14
#define LCD_D2  15  // GPIO Port B, Pin 15
#define LCD_D3  16  // GPIO Port B, Pin 16
#define LCD_D4  14  // GPIO Port E, Pin 14
#define LCD_D5  13  // GPIO Port E, Pin 13
#define LCD_D6  1   // GPIO Port E, Pin 1
#define LCD_D7  7   // GPIO Port D, Pin 7

// Macros to set and reset pins on Port E
#define SET_RS()   (PTE->PSOR = (1 << LCD_RS))
#define RESET_RS() (PTE->PCOR = (1 << LCD_RS))
#define SET_E()    (PTE->PSOR = (1 << LCD_E))
#define RESET_E()  (PTE->PCOR = (1 << LCD_E))

#define SET_D0()   (PTB->PSOR = (1 << LCD_D0))
#define RESET_D0() (PTB->PCOR = (1 << LCD_D0))
#define SET_D1()   (PTB->PSOR = (1 << LCD_D1))
#define RESET_D1() (PTB->PCOR = (1 << LCD_D1))
#define SET_D2()   (PTB->PSOR = (1 << LCD_D2))
#define RESET_D2() (PTB->PCOR = (1 << LCD_D2))
#define SET_D3()   (PTB->PSOR = (1 << LCD_D3))
#define RESET_D3() (PTB->PCOR = (1 << LCD_D3))
#define SET_D4()   (PTE->PSOR = (1 << LCD_D4))
#define RESET_D4() (PTE->PCOR = (1 << LCD_D4))
#define SET_D5()   (PTE->PSOR = (1 << LCD_D5))
#define RESET_D5() (PTE->PCOR = (1 << LCD_D5))
#define SET_D6()   (PTE->PSOR = (1 << LCD_D6))
#define RESET_D6() (PTE->PCOR = (1 << LCD_D6))
#define SET_D7()   (PTD->PSOR = (1 << LCD_D7))
#define RESET_D7() (PTD->PCOR = (1 << LCD_D7))

// Function prototypes
void LCD_Init(void);
void LCD_Clear(void);
void LCD_SetCursor(uint8_t x, uint8_t y);
void LCD_WriteString(const char *str);
void LCD_Command(uint8_t cmd);
void LCD_Data(uint8_t data);
void LCD_SendByte(uint8_t c, uint8_t isdata);

#endif // LCD_H

#include "S32K144.h"
#include "lcd.h"
#include "clocks_and_modes.h"
#include "Adc.h"
#include "Mcu.h"
#include "Port.h"
#include <stdio.h>

#define ADC_MAX_CHANNELS 2

uint32_t adcResultInMv_pot = 0;
uint32_t adcResultInMv_extPot = 0;
float adcReading_V;
float adcReading_V_ext;

Adc_ValueGroupType sampleBuffer[ADC_MAX_CHANNELS];


void delay_ms(uint32_t ms);
void delay_us(uint32_t us);

void WDOG_disable (void){
	 WDOG->CNT   = 0xD928C520; 					// Unlock watchdog
	 WDOG->TOVAL = 0x0000FFFF; 					// Maximum timeout value
	 WDOG->CS    = 0x00002100; 					// Disable watchdog
}

int main(void) {
	WDOG_disable();  							// Disable the watchdog time
	SOSC_init_8MHz(); 							// Initialize system oscillator for 8 MHz xtal
	SPLL_init_160MHz(); 						// Initialize SPLL to 160 MHz with 8 MHz SOSC
	NormalRUNmode_80MHz(); 						// Init clocks: 80 MHz sysclk & core, 40 MHz bus, 20 MHz flash

    /* Initialize Necessary Drivers */
	Mcu_Init(&Mcu_Config);
	Mcu_InitClock(McuClockSettingConfig_0);
	Port_Init(&Port_Config);
    Adc_Init(&Adc_Config);   					// Initialize the ADC
    LCD_Init();   								// Initialize the LCD
    LCD_Clear();  								// Clear LCD display

    Adc_SetupResultBuffer(AdcGroup_0, sampleBuffer);

    while (1) {

    	Adc_StartGroupConversion(AdcGroup_0);

    	// Wait until the ADC conversion is completed
    	while (Adc_ReadGroup(AdcGroup_0, sampleBuffer) != E_OK);

    	// Process the ADC results
    	char adcData[16];
    	for (uint32_t i = 0; i < ADC_MAX_CHANNELS; i++) {
    		uint32_t adcValue = sampleBuffer[i];
    	    float voltage = (adcValue * 5.0) / 5000.0;  // Convert to voltage

    	    // Prepare the string to display the ADC voltage
    	    sprintf(adcData, "CH%d: %.2fV", i, voltage);

    	    // Display the ADC voltage on the LCD
    	    LCD_SetCursor(0, i);
    	    LCD_WriteString(adcData);
    	}
    	delay_ms(500);
    }
    return 0;
}


void delay_ms(uint32_t ms) {
    for (volatile uint32_t i = 0; i < ms * 1000; i++);
}

void delay_us(uint32_t us) {
    for (volatile uint32_t i = 0; i < us * 4; i++);
}

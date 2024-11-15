/*
 * adc_driver.h


 *
 *  Created on: 30 Aug 2024
 *      Author: ArgieCS
 */

#ifndef ADC_DRIVER_H
#define ADC_DRIVER_H

#include "S32K144.h"

#define ADC_MAX_VALUE 5000.0
#define VREFH_VALUE 5.0

void ADC_Init(void);
void convertAdcChan(uint16_t adcChan);
uint8_t adc_complete(void);
uint32_t read_adc_chx(void);
//uint16_t ADC_Read(uint8_t channel);

#endif // ADC_DRIVER_H

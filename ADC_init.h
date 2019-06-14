/*
 * ADC_init.h
 *
 *  Created on: ???/???/????
 *      Author: MR.X
 */

#ifndef ADC_INIT_H_
#define ADC_INIT_H_

#include "../Libs/define.h"
#include "../Libs/typedef.h"
#include "../Libs/utils.h"
#include "avr/delay.h"


#define ADMUX *( (u8*)0X27 )
#define ADCSRA *( (u8*)0X26 )
#define ADCH *( (u8*)0X25 )
#define ADCL *( (u8*)0X24 )


void ADC_WatchWhile(void);
void ADC_StartConversion(void);
void ADC_init(void);

#endif /* ADC_INIT_H_ */

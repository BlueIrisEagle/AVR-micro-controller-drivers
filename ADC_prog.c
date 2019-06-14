/*
 * ADC_prog.c
 *
 *  Created on: ???/???/????
 *      Author: MR.X
 */

#include "DIO_init.h"
#include "DIO_cfg.h"
#include "avr/delay.h"
#include "ADC_init.h"
#include "ADC_cfg.h"


#define CONCAT(B0,B1,B2,B3,B4,B5,B6,B7) CONCATENATOR(B0,B1,B2,B3,B4,B5,B6,B7)
#define CONCATENATOR(B0,B1,B2,B3,B4,B5,B6,B7) 0b##B7##B6##B5##B4##B3##B2##B1##B0


void ADC_init(void)
{
	ADMUX = CONCAT(REF_SELECTION_BIT7,REF_SELECTION_BIT6,CONV_RESULT_BIT5,ADC_CHANNEL_BIT4,ADC_CHANNEL_BIT3,ADC_CHANNEL_BIT2,ADC_CHANNEL_BIT1,ADC_CHANNEL_BIT0);
	SET_BIT(ADCSRA, 7);
	SET_BIT(ADCSRA, 4);

}

void ADC_WatchWhile(void)
{

	while ( GET_BIT(ADCSRA, 4) == 0);
	SET_BIT(ADCSRA, 4);
}

void ADC_StartConversion(void)
{

	SET_BIT(ADCSRA, 6);
}
/*
void main(void)
{
	ADC_init();
	u16 read;
	DDRD=0XFF;



	while(1)
	{
		ADC_StartConversion();

		ADC_WatchWhile();

		read=ADCH;
		read=(read*5)/256;

		if (read > 20)
			PORTD=0b00000001;
		else
			PORTD=0b00000010;

	}
}
*/

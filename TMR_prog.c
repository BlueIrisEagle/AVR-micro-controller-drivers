/*
 * TMR_prig.c
 *
 *  Created on: ???/???/????
 *      Author: MR.X
 */


#include "../Libs/define.h"
#include "../Libs/typedef.h"
#include "../Libs/utils.h"
#include "DIO_init.h"
#include "KPD_init.h"
#include "avr/delay.h"
#include "avr/interrupt.h"
#include "TMR_cfg.h"
#define F_CPU 12000000

void TMR0_Normal (void)
{
	DDRB=0XFF;
	PORTB=0XFF;
	CLEAR_BIT(TCCR0, 7);
	SET_BIT(TIMSK, 0);
	SET_BIT(SREG, 7);
	CLEAR_BIT (TCCR0, 6);
	CLEAR_BIT (TCCR0, 3);
	if (TCCR0_BIT5 == 0)
		CLEAR_BIT(TCCR0, 5);
	else
		SET_BIT(TCCR0, 5);

	if (TCCR0_BIT4 == 0)
		CLEAR_BIT(TCCR0, 4);
	else
		SET_BIT(TCCR0, 4);

	if (TCCR0_BIT2 == 0)
		CLEAR_BIT (TCCR0, 2);
	else
		SET_BIT (TCCR0, 2);


	if (TCCR0_BIT1 == 0)
		CLEAR_BIT (TCCR0, 1);
	else
		SET_BIT (TCCR0, 1);


	if (TCCR0_BIT0 == 0)
		CLEAR_BIT (TCCR0, 0);
	else
		SET_BIT (TCCR0, 0);


}


void TMR0_CTC (void)
{
	DDRB=0XFF;
	PORTB=0XFF;
	CLEAR_BIT(TCCR0, 7);
	SET_BIT(TIMSK, 0);
	SET_BIT(SREG, 7);
	CLEAR_BIT (TCCR0, 6);
	SET_BIT (TCCR0, 3);
	if (TCCR0_BIT5 == 0)
		CLEAR_BIT(TCCR0, 5);
	else
		SET_BIT(TCCR0, 5);

	if (TCCR0_BIT4 == 0)
		CLEAR_BIT(TCCR0, 4);
	else
		SET_BIT(TCCR0, 4);

	if (TCCR0_BIT2 == 0)
		CLEAR_BIT (TCCR0, 2);
	else
		SET_BIT (TCCR0, 2);


	if (TCCR0_BIT1 == 0)
		CLEAR_BIT (TCCR0, 1);
	else
		SET_BIT (TCCR0, 1);


	if (TCCR0_BIT0 == 0)
		CLEAR_BIT (TCCR0, 0);
	else
		SET_BIT (TCCR0, 0);


}

void TMR0_FASTPWM (void)
{
	DDRB=0XFF;
	PORTB=0XFF;
	CLEAR_BIT(TCCR0, 7);
	SET_BIT(TIMSK, 0);
	SET_BIT(SREG, 7);
	SET_BIT (TCCR0, 6);
	SET_BIT (TCCR0, 3);
	if (TCCR0_BIT5 == 0)
		CLEAR_BIT(TCCR0, 5);
	else
		SET_BIT(TCCR0, 5);

	if (TCCR0_BIT4 == 0)
		CLEAR_BIT(TCCR0, 4);
	else
		SET_BIT(TCCR0, 4);

	if (TCCR0_BIT2 == 0)
		CLEAR_BIT (TCCR0, 2);
	else
		SET_BIT (TCCR0, 2);


	if (TCCR0_BIT1 == 0)
		CLEAR_BIT (TCCR0, 1);
	else
		SET_BIT (TCCR0, 1);


	if (TCCR0_BIT0 == 0)
		CLEAR_BIT (TCCR0, 0);
	else
		SET_BIT (TCCR0, 0);

}

/*
void TMR1_FASTPWM (void)
{
	DDRB=0XFF;
	PORTB=0XFF;
	SET_BIT(SREG, 7);
}

void TMR1_NON_PWM (void)
{
	DDRB=0XFF;
	PORTB=0XFF;
	SET_BIT(SREG, 7);
}


void TMR_PWM_PhaseCorrect (void)
{
	SET_BIT(SREG, 7);
	SET_BIT (TCCR0, 6);
	CLEAR_BIT (TCCR0, 3);
}
*/




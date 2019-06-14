/*
 * TImer_init.h
 *
 *  Created on: ???/???/????
 *      Author: MR.X
 */

#ifndef TMR_INIT_H_
#define TMR_INIT_H_


#include "../Libs/define.h"
#include "../Libs/typedef.h"
#include "../Libs/utils.h"
#include "avr/delay.h"


#define TCCR0 *( (u8*)0X53 )
#define TIMSK *( (u8*)0X59 )
#define TCCR1A *( (u8*)0X4F )
#define TCCR1B *( (u8*)0X4E )



void TMR0_FASTPWM (void);
void TMR0_CTC (void);
void TMR0_Normal (void);

#endif /* TMR_INIT_H_ */

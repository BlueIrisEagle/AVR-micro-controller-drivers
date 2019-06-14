/*
 * TMR_cfg.h
 *
 *  Created on: ???/???/????
 *      Author: MR.X
 */

#ifndef TMR_CFG_H_
#define TMR_CFG_H_

#define TCCR0_BIT5 0			/* IF NORMAL OR CTC TIMER*/
#define TCCR0_BIT4 0			/* 00 >> Normal Port Operation, OC0 disconnected*/
								/* 01 >> Toggle OC0 */
								/* 10 >> Clear OC0 */
								/* 11 >> Set OC0  */

								/* IF FAST PWM */
								/* 00 >> Normal Port Operation, OC0 disconnected */
								/* 01 >> Reserved */
								/* 10 >> Clear OC0 on compare match, set at TOP */
								/* 11 >> Set OC0 on compare match, set at TOP  */


#define TCCR0_BIT2 0			/* FOR SETTING PRESCALER OF THE TIMER */
#define TCCR0_BIT1 0			/* 000 >> No clock source */
#define TCCR0_BIT0 0			/* 001 >> No prescaler */
								/* 010 >> Prescaller == 8 */
								/* 011 >> Prescaller == 64 */
								/* 100 >> Prescaller == 265 */
								/* 101 >> Prescaller == 1024 */
								/* 110 >> External clock source on T0 pin, clock on falling edge */
								/* 111 >> External clock source on T0 pin, clock on rising edge */



								/* FOR NON PWM */
//#define TCCR1A_BIT7_1A1 0		/* CHOOSE THE CHANNEL YOU WANT TO ACTIVE, THOSE BITS FOR BOTH CHANNELS */
//#define TCCR1A_BIT6_1A0 0		/* 00 >> For Normal Port Operation */
//#define TCCR1A_BIT5_1B1 0 		/* 01 >> Toggle OC1A/OC1B on comparing match */
//#define TCCR1A_BIT4_1B0 0		/* 10 >> Clear OC1A/OC1B on comparing match, set output to low level */
								/* 11 >> Set OC1A/OC1B on comparing match, set output to high level */

								/* FOR FAST PWM */
								/* 00 >> For Normal Port Operation */
								/* 01 >> OC1A comparing match, OC1B disconnected*/
								/* 10 >> Clear OC1A/OC1B on comparing match, set OC1A/OC1B at TOP */
								/* 11 >> Set OC1A/OC1B on comparing match, clear OC1A/OC1B at TOP */





#endif /* TMR_CFG_H_ */

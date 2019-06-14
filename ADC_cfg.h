/*
 * ADC_cfg.h
 *
 *  Created on: ???/???/????
 *      Author: MR.X
 */

#ifndef ADC_CFG_H_
#define ADC_CFG_H_


#define REF_SELECTION_BIT7 0			/* For AVCC with external capacitor at AREF pin		 */
#define	REF_SELECTION_BIT6 1


#define CONV_RESULT_BIT5 1			/*In the conversion result, Set the bit with 1 to left adjust result */
									/* ,otherwise, clear it with 0 to right adjust						*/

#define ADC_CHANNEL_BIT4 0				/* ADC 0: 00000		ADC 1: 00001		ADC 2: 00010 */
#define ADC_CHANNEL_BIT3 0
#define ADC_CHANNEL_BIT2 0				/* ADC 3: 00011		ADC 4: 00100		ADC 5: 00101 */
#define ADC_CHANNEL_BIT1 0
#define ADC_CHANNEL_BIT0 0				/* ADC 6: 00110		ADC 7: 00111					*/


//#define ADC_ENABLE_BIT7 1    			/* Enabling ADC */
//#define ADC_START_CONV_BIT6 0			/* To start Conversion, you have to set this bit */


#endif /* ADC_CFG_H_ */

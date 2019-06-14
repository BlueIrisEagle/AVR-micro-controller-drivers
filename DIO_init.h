/*
 * DIO_init.h
 *
 *  Created on: Aug 22, 2018
 *      Author: Mr.Nour
 */

#ifndef DIO_INIT_H_
#define DIO_INIT_H_


#include "../Libs/define.h"
#include "../Libs/typedef.h"
#include "../Libs/utils.h"
#include "avr/delay.h"


enum DIO_enuPinNum
{
	DIO_u8Pin0 = 0,
	DIO_u8Pin1 ,
	DIO_u8Pin2 ,
	DIO_u8Pin3 ,
	DIO_u8Pin4 ,
	DIO_u8Pin5 ,
	DIO_u8Pin6 ,
	DIO_u8Pin7 ,
	DIO_u8Pin8 ,
	DIO_u8Pin9 ,
	DIO_u8Pin10 ,
	DIO_u8Pin11 ,
	DIO_u8Pin12 ,
	DIO_u8Pin13 ,
	DIO_u8Pin14 ,
	DIO_u8Pin15 ,
	DIO_u8Pin16 ,
	DIO_u8Pin17 ,
	DIO_u8Pin18 ,
	DIO_u8Pin19 ,
	DIO_u8Pin20 ,
	DIO_u8Pin21 ,
	DIO_u8Pin22 ,
	DIO_u8Pin23 ,
	DIO_u8Pin24 ,
	DIO_u8Pin25 ,
	DIO_u8Pin26 ,
	DIO_u8Pin27 ,
	DIO_u8Pin28 ,
	DIO_u8Pin29 ,
	DIO_u8Pin30 ,
	DIO_u8Pin31 ,

};

#define PinPerPort 8
#define DIO_u8OUTPUT    1
#define DIO_u8INPUT    0
#define DIO_u8HIGH    1
#define DIO_u8LOW    0

/*


*/

u8 DIO_u8SetPinDirection(u8 Copy_u8PinNumber, u8 Copy_u8PinDirection);
u8 DIO_u8GetPinValue(u8 Copy_u8PinNumber, u8* pinValuePtr );
u8 DIO_u8SetPinValue(u8 Copy_u8PinNumber, u8 Copy_u8PinValue);
u8 DIO_SetPortDirection(u8 u8PortId, u8 u8PortDir);
u8 DIO_SetPortValue(u8 u8PortId, u8 u8PortVal);
void DIO_u8Init(void);







#endif /* DIO_INIT_H_ */

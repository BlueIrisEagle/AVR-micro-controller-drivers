/*
 * DIO_prog.c
 *
 *  Created on: Aug 22, 2018
 *      Author: Mr.Nour
 */

#include "DIO_init.h"
#include "DIO_cfg.h"
#include "avr/delay.h"

#define CONCAT(B0,B1,B2,B3,B4,B5,B6,B7) CONCATENATOR(B0,B1,B2,B3,B4,B5,B6,B7)
#define CONCATENATOR(B0,B1,B2,B3,B4,B5,B6,B7) 0b##B7##B6##B5##B4##B3##B2##B1##B0

u8 u8FuncErrorValidation = 1;

u8 DIO_u8SetPinDirection(u8 Copy_u8PinNumber, u8 Copy_u8PinDirection) {
	u8FuncErrorValidation = 1;
	u8 u8PinNumber, u8PortNumber;

	if ((Copy_u8PinNumber < DIO_u8Pin0) || (Copy_u8PinNumber > DIO_u8Pin31)) {
		u8FuncErrorValidation = 0;
	} else {
		u8PortNumber = Copy_u8PinNumber / PinPerPort;
		u8PinNumber = Copy_u8PinNumber % PinPerPort;

		switch (u8PortNumber) {
		case 0:
			if (Copy_u8PinDirection == DIO_u8INPUT) {
				CLEAR_BIT(DDRA, u8PinNumber);
			} else if (Copy_u8PinDirection == DIO_u8OUTPUT) {
				SET_BIT(DDRA, u8PinNumber);
			} else {
				u8FuncErrorValidation = 0;
			}
			break;

		case 1:
			if (Copy_u8PinDirection == DIO_u8INPUT) {
				CLEAR_BIT(DDRB, u8PinNumber);
			} else if (Copy_u8PinDirection == DIO_u8OUTPUT) {
				SET_BIT(DDRB, u8PinNumber);
			} else {
				u8FuncErrorValidation = 0;
			}
			break;

		case 2:
			if (Copy_u8PinDirection == DIO_u8INPUT) {
				CLEAR_BIT(DDRC, u8PinNumber);
			} else if (Copy_u8PinDirection == DIO_u8OUTPUT) {
				SET_BIT(DDRC, u8PinNumber);
			} else {
				u8FuncErrorValidation = 0;
			}
			break;

		case 3:
			if (Copy_u8PinDirection == DIO_u8INPUT) {
				CLEAR_BIT(DDRD, u8PinNumber);
			} else if (Copy_u8PinDirection == DIO_u8OUTPUT) {
				SET_BIT(DDRD, u8PinNumber);
			} else {
				u8FuncErrorValidation = 0;
			}
			break;

		default:
			u8FuncErrorValidation = 0;
		}
	}

	return u8FuncErrorValidation;

}

u8 DIO_u8SetPinValue(u8 Copy_u8PinNumber, u8 Copy_u8PinValue) {

	u8 u8PortNumber = Copy_u8PinNumber / PinPerPort;
	u8 u8PinNumber = Copy_u8PinNumber % PinPerPort;

	u8FuncErrorValidation = 1;

	if ((Copy_u8PinNumber < DIO_u8Pin0) || (Copy_u8PinNumber > DIO_u8Pin31)) {
		 u8FuncErrorValidation = 0;
	} else {

		switch (u8PortNumber) {
		case 0:
			if (Copy_u8PinValue == DIO_u8LOW)
				CLEAR_BIT(PORTA, u8PinNumber);
			else if (Copy_u8PinValue == DIO_u8HIGH)
				SET_BIT(PORTA, u8PinNumber);
			else
				u8FuncErrorValidation = 0;

			break;

		case 1:
			if (Copy_u8PinValue == DIO_u8LOW)
				CLEAR_BIT(PORTB, u8PinNumber);
			else if (Copy_u8PinValue == DIO_u8HIGH)
				SET_BIT(PORTB, u8PinNumber);
			else
				u8FuncErrorValidation = 0;

			break;
		case 2:
			if (Copy_u8PinValue == DIO_u8LOW)
				CLEAR_BIT(PORTC, u8PinNumber);
			else if (Copy_u8PinValue == DIO_u8HIGH)
				SET_BIT(PORTC, u8PinNumber);
			else
				u8FuncErrorValidation = 0;

			break;
		case 3:
			if (Copy_u8PinValue == DIO_u8LOW)
				CLEAR_BIT(PORTD, u8PinNumber);
			else if (Copy_u8PinValue == DIO_u8HIGH)
				SET_BIT(PORTD, u8PinNumber);
			else
				u8FuncErrorValidation = 0;

			break;

		}
	}
	return u8FuncErrorValidation; }
/*-------------------------------------------------------------------------------------*/

/*
 if (Copy_u8PinDirection == DIO_u8INPUT && u8PortNumber == 0) {
 SET_BIT(PINA, u8PinNumber);
 } else if (Copy_u8PinDirection == DIO_u8OUTPUT && u8PortNumber == 0) {
 SET_BIT(PORTA, u8PinNumber);
 } else if (Copy_u8PinDirection == DIO_u8INPUT && u8PortNumber == 1) {
 SET_BIT(PINB, u8PinNumber);
 } else if (Copy_u8PinDirection == DIO_u8OUTPUT && u8PortNumber == 1) {
 SET_BIT(PORTB, u8PinNumber);
 } else if (Copy_u8PinDirection == DIO_u8INPUT && u8PortNumber == 2) {
 SET_BIT(PINC, u8PinNumber);
 } else if (Copy_u8PinDirection == DIO_u8OUTPUT && u8PortNumber == 2) {
 SET_BIT(PORTC, u8PinNumber);
 } else if (Copy_u8PinDirection == DIO_u8INPUT && u8PortNumber == 3) {
 SET_BIT(PIND, u8PinNumber);
 } else if (Copy_u8PinDirection == DIO_u8OUTPUT && u8PortNumber == 3) {
 SET_BIT(PORTD, u8PinNumber);
 }

 else
 u8FuncErrorValidation = 0;

 return u8FuncErrorValidation;*/

/*-------------------------------------------------------------------------------------*/
u8 DIO_u8GetPinValue(u8 Copy_u8PinNumber, u8* pinValuePtr) {

	u8FuncErrorValidation = 1;
	u8 u8PinNumber, u8PortNumber;

	if ((Copy_u8PinNumber < DIO_u8Pin0) || (Copy_u8PinNumber > DIO_u8Pin31)) {
		u8FuncErrorValidation = 0;
	} else {
		u8PortNumber = Copy_u8PinNumber / PinPerPort;
		u8PinNumber = Copy_u8PinNumber % PinPerPort;

		switch (u8PortNumber) {
		case 0:
			*pinValuePtr = GET_BIT(PINA, u8PinNumber);

			break;

		case 1:
			*pinValuePtr = GET_BIT(PINB, u8PinNumber);
			break;

		case 2:
			*pinValuePtr = GET_BIT(PINC, u8PinNumber);
			break;

		case 3:
			*pinValuePtr = GET_BIT(PIND, u8PinNumber);
			break;

		default:
			u8FuncErrorValidation = 0;
		}
	}

	return u8FuncErrorValidation;

}

void DIO_u8Init(void) {
	DDRA = CONCAT(DIO_u8Pin7_DDR_init, DIO_u8Pin6_DDR_init, DIO_u8Pin5_DDR_init,
			DIO_u8Pin4_DDR_init, DIO_u8Pin3_DDR_init, DIO_u8Pin2_DDR_init,
			DIO_u8Pin1_DDR_init, DIO_u8Pin0_DDR_init);


	DDRB = CONCAT(DIO_u8Pin15_DDR_init, DIO_u8Pin14_DDR_init,
			DIO_u8Pin13_DDR_init, DIO_u8Pin12_DDR_init, DIO_u8Pin11_DDR_init,
			DIO_u8Pin10_DDR_init, DIO_u8Pin9_DDR_init, DIO_u8Pin8_DDR_init);

	DDRC = CONCAT(DIO_u8Pin23_DDR_init, DIO_u8Pin22_DDR_init,
			DIO_u8Pin21_DDR_init, DIO_u8Pin20_DDR_init, DIO_u8Pin19_DDR_init,
			DIO_u8Pin18_DDR_init, DIO_u8Pin17_DDR_init, DIO_u8Pin16_DDR_init);

	DDRD = CONCAT(DIO_u8Pin31_DDR_init, DIO_u8Pin30_DDR_init,
			DIO_u8Pin29_DDR_init, DIO_u8Pin28_DDR_init, DIO_u8Pin27_DDR_init,
			DIO_u8Pin26_DDR_init, DIO_u8Pin25_DDR_init, DIO_u8Pin24_DDR_init);

	PORTA = CONCAT(DIO_u8Pin7_PORT_init, DIO_u8Pin6_PORT_init,
			DIO_u8Pin5_PORT_init, DIO_u8Pin4_PORT_init, DIO_u8Pin3_PORT_init,
			DIO_u8Pin2_PORT_init, DIO_u8Pin1_PORT_init, DIO_u8Pin0_PORT_init);

	PORTB = CONCAT(DIO_u8Pin15_PORT_init, DIO_u8Pin14_PORT_init,
			DIO_u8Pin13_PORT_init, DIO_u8Pin12_PORT_init, DIO_u8Pin11_PORT_init,
			DIO_u8Pin10_PORT_init, DIO_u8Pin9_PORT_init,
			DIO_u8Pin8_PORT_init);

	PORTC = CONCAT(DIO_u8Pin23_PORT_init, DIO_u8Pin22_PORT_init,
			DIO_u8Pin21_PORT_init, DIO_u8Pin20_PORT_init, DIO_u8Pin19_PORT_init,
			DIO_u8Pin18_PORT_init, DIO_u8Pin17_PORT_init,
			DIO_u8Pin16_PORT_init);

	PORTD = CONCAT(DIO_u8Pin31_PORT_init, DIO_u8Pin30_PORT_init,
			DIO_u8Pin29_PORT_init, DIO_u8Pin28_PORT_init, DIO_u8Pin27_PORT_init,
			DIO_u8Pin26_PORT_init, DIO_u8Pin25_PORT_init,
			DIO_u8Pin24_PORT_init);

	PINA = CONCAT(DIO_u8Pin7_PIN_init, DIO_u8Pin6_PIN_init, DIO_u8Pin5_PIN_init,
			DIO_u8Pin4_PIN_init, DIO_u8Pin3_PIN_init, DIO_u8Pin2_PIN_init,
			DIO_u8Pin1_PIN_init, DIO_u8Pin0_PIN_init);

	PINB = CONCAT(DIO_u8Pin15_PIN_init, DIO_u8Pin14_PIN_init,
			DIO_u8Pin13_PIN_init, DIO_u8Pin12_PIN_init, DIO_u8Pin11_PIN_init,
			DIO_u8Pin10_PIN_init, DIO_u8Pin9_PIN_init, DIO_u8Pin8_PIN_init);

	PINC = CONCAT(DIO_u8Pin23_PIN_init, DIO_u8Pin22_PIN_init,
			DIO_u8Pin21_PIN_init, DIO_u8Pin20_PIN_init, DIO_u8Pin19_PIN_init,
			DIO_u8Pin18_PIN_init, DIO_u8Pin17_PIN_init, DIO_u8Pin16_PIN_init);

	PIND = CONCAT(DIO_u8Pin31_PIN_init, DIO_u8Pin30_PIN_init,
			DIO_u8Pin29_PIN_init, DIO_u8Pin28_PIN_init, DIO_u8Pin27_PIN_init,
			DIO_u8Pin26_PIN_init, DIO_u8Pin25_PIN_init, DIO_u8Pin24_PIN_init);

}

u8 DIO_SetPortDirection(u8 u8PortId, u8 u8PortDir) {
	u8FuncErrorValidation = 1;
	/* Check on the Required PORT Number */
	switch (u8PortId) {
	case 0:
		DDRA = u8PortDir;
		break;
	case 1:
		DDRB = u8PortDir;
		break;
	case 2:
		DDRC = u8PortDir;
		break;
	case 3:
		DDRD = u8PortDir;
		break;

	default:
		u8FuncErrorValidation = 0;
		break;
	}
	return u8FuncErrorValidation;
}

u8 DIO_SetPortValue(u8 u8PortId, u8 u8PortVal) {
	/* Check on the Required PORT Number */

	u8FuncErrorValidation = 1;

	switch (u8PortId) {
	case 0:
		PORTA = u8PortVal;
		break;
	case 1:
		PORTB = u8PortVal;
		break;
	case 2:
		PORTC = u8PortVal;
		break;
	case 3:
		PORTD = u8PortVal;
		break;
	default:
		u8FuncErrorValidation = 0;
		break;
	}
	return u8FuncErrorValidation;
}

//void main(void) {
//
//	u8 value;
//	DIO_u8Init();
//	DIO_u8SetPinDirection(7, 1);
//	DIO_u8SetPinValue(7, 1);
//
//	return;
//
//}

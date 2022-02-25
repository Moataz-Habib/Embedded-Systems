
#include "STD_TYPES.h"

#ifndef DIO_PROG_H_
#define DIO_PROG_H_
// PORTS
#define PORTA 0
#define PORTB 1
#define PORTC 2
#define PORTD 3

// PINS
#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7

//PIN Directions
#define INPUT 0
#define OUTPUT 1

//PIN Values
#define LOW 0
#define HIGH 1


void DIO_SetPinValue(u8 PortIdCopy,u8 PinIdCopy,u8 PinvalCopy);
u8 DIO_GetPinValue(u8 PortIdCopy,u8 PinIdCopy);
void DIO_SetPinDirection(u8 PortIdCopy,u8 PinIdCopy,u8 PinDirCopy);


void DIO_SetPortDirection(u8 PortIdCopy, u8 PortDir);
void DIO_SetPortValue(u8 PortId,u8 ProtVal);

#endif /* DIO_PROG_H_ */
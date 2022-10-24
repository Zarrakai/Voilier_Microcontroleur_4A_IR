#ifndef MYUSART_H
#define MYUSART_H

#include "stm32f10x.h"

//configure the usart and its clock, Tx, Rx
void Init_Myusart(USART_TypeDef* USARTx);

//
void transsmision_cts(USART_TypeDef* USART, int cts);

//
void reception_rts(USART_TypeDef* USART, int rts);

//

#endif


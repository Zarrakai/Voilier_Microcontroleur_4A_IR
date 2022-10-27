#ifndef MYUSART_H
#define MYUSART_H
#include "stm32f10x.h"


/*
 - Enable the UART clock 
 - Fix Baud rate
 - Enable UART 
 - Fix the length of the transmitted word  
 - Enable Receiver/Transmitter 
 */
void USART_config(USART_TypeDef* USARTx);


/* Verify if the Data Register is not empty : data is received */
int DR_not_empty(USART_TypeDef* USARTx);

/* Verify if the Data Register contain the data and it's ready to be read */
int data_is_shifted(USART_TypeDef* USARTx);

/* Verify if the data is transmitted to the destination */
int data_is_transmitted(USART_TypeDef* USARTx);

#endif


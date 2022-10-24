#include "MyUSART.h"



void Init_Myusart(USART_TypeDef* USARTx){
	
	if(USARTx == USART1){
		RCC->APB2ENR |= RCC_APB2ENR_USART1EN;
	}
	else if(USARTx == USART3){
		RCC->APB1ENR |= RCC_APB1ENR_USART3EN;
	}
	else{
		//usaert 2 : interrupt !!
	}
	USARTx->CR1 |= USART_CR1_UE;
	USARTx->CR2 |= USART_CR1_TE;
	USARTx->CR2 |= USART_CR1_RE;
}

void transsmision_cts(USART_TypeDef* USART, int cts){
	if(cts == 1){
		USART->CR3 |= USART_CR3_CTSE;
	}
	if(cts == 0){
		USART->CR3 &= ~USART_CR3_CTSE;
	}
}

void reception_rts(USART_TypeDef* USART, int rts){
	if(rts == 1){
		USART->CR3 |= USART_CR3_RTSE;
	}
	if(rts == 0){
		USART->CR3 &= ~USART_CR3_RTSE;
	}
}

//done

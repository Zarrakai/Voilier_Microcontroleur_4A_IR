#include "stm32f10x.h"
#include "MyUSART.h"


int main(void){
	
	USART_TypeDef * myUsart = USART1;
	int8_t data;														// variable to stock data received 
	
	USART_config(myUsart);
	
	while(1){
		if(DR_not_empty(myUsart)){
			data = myUsart->DR;
			if(data < 0){
				// tourner à gauche
			}
			// tourner à droite
		}
	}
	
}


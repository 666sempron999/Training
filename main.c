#include "stm32f10x.h"
// void Delay( uint32_t Val);


while(1)
	{
	GPIOB->BSRR =GPIO_BSRR_BS5;		// ???????? ???.
	Delay(800000);
	GPIOB->BSRR =GPIO_BSRR_BS5;		// ?????????? ???. 
	Delay(800000);
	}

}



void Delay( uint32_t Val) 
{
  while(1)
  		{
		__nop();
  		}
}

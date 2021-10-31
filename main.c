#include "stm32f10x.h" 

void delay_ms(int32_t ms);

int main()
{
    uint8_t k;
	
    GPIO_InitTypeDef GPIO_InitStructure;
    RCC_APB2PeriphClockCmd ( RCC_APB2Periph_GPIOA , ENABLE );
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_4;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP ;
    GPIO_InitStructure.GPIO_Speed  = GPIO_Speed_50MHz ;
    GPIO_Init ( GPIOA , &GPIO_InitStructure );	
    
    for(k=0;k<5;k++)
    {
		    GPIO_SetBits (GPIOA,GPIO_Pin_4);
			  delay_ms(300);
			  GPIO_ResetBits (GPIOA,GPIO_Pin_4);
			  delay_ms(300);
    }
		while(1)
		{
		    GPIO_SetBits (GPIOA,GPIO_Pin_4);
			  delay_ms(1000);
			  GPIO_ResetBits (GPIOA, GPIO_Pin_4);
			  delay_ms(1000);
		}
}	

void delay_ms(int32_t ms)
{
    int32_t i;
	  while(ms--)
		{
		    i=7500;
			  while(i--);
		}
}

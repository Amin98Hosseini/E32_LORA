#include "E32_LORA.h"
#include "main.h"
#include "stm32f1xx.h"

extern UART_HandleTypeDef huart1;

//This Function For Send Data With Usart1
void puts_str(char *str)
{
	while(*str!=0)
	{
	HAL_UART_Transmit(&huart1,(unsigned char *)str,1,10);
	str++;
	}
}

// This Function Set Mode E32
void E32_Mode(int a)
{
	//Mode 0 
	if(a==0)
	{
		HAL_GPIO_WritePin(GPIOA,M0,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA,M1,GPIO_PIN_RESET);
	}
	//Mode 1
	if(a==1)
	{
		HAL_GPIO_WritePin(GPIOA,M0,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA,M1,GPIO_PIN_RESET);
	}
	//Mode 2
	if(a==2)
	{
		HAL_GPIO_WritePin(GPIOA,M0,GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA,M1,GPIO_PIN_SET);
	}
	//Mode 3
	if(a==3)
	{
		HAL_GPIO_WritePin(GPIOA,M0,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA,M1,GPIO_PIN_SET);
	}
}

//Send Data With E32 (Set Your Data In Put Function)
void E32_Send(char *Data)
{
		while(*Data!=0)
	{
	HAL_UART_Transmit(&huart1,(unsigned char *)Data,1,10);
	Data++;
	}
}

// Recived Data With E32 ( Your Data Recived Is Out Put Of This Function With &Data)
void E32_Recive(char *Data)
{
	if(huart1.RxXferCount==0)
	{
		HAL_UART_Receive_IT(&huart1,(unsigned char*)&Data,100);
	}
}

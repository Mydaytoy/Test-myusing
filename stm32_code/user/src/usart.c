/*********************************************************************
*@Author			: chenjiaru
*@Data				: 2022-05-11 14:30
*@LastWditTime		: 2022-05-12 12:46
*@Description		: All of the function about usart in this file
*********************************************************************/


#include "usart.h"

/********************************************************************
*	全局变量
********************************************************************/
rec_info u1rec_buf;		/*结构体，USART1接收数据信息集合*/


/********************************************************************
* \brief			usart1 init
* \param[in]		none
* \return			none
* \hideinitializer
********************************************************************/
void Usart1_Init(void)
{
	/*打开GPIOA外设时钟*/
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
	
	/*配置USART1的TX管脚*/
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_9;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_10MHz;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
	GPIO_Init(GPIOA, &GPIO_InitStructure);
	
	/*配置USART1的RX管脚*/
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_10;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
	GPIO_Init(GPIOA, &GPIO_InitStructure);
	
	/*打开USART1外设时钟*/
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_USART1, ENABLE);
	
	/*配置USART1参数*/
	USART_InitTypeDef USART_InitStructure;
	USART_InitStructure.USART_BaudRate = 115200;							/*波特率*/
	USART_InitStructure.USART_WordLength = USART_WordLength_8b;				/*8位数据位*/
	USART_InitStructure.USART_StopBits = USART_StopBits_1;					/*1位停止位*/
	USART_InitStructure.USART_Parity = USART_Parity_No;						/*无奇偶校验*/
	USART_InitStructure.USART_HardwareFlowControl =USART_HardwareFlowControl_None;/*无硬件控制*/
	USART_InitStructure.USART_Mode = USART_Mode_Tx | USART_Mode_Rx;			/*可发送可接收*/
	USART_Init(USART1, &USART_InitStructure);
	
	/*设置中断相关*/
	NVIC_SetPriority(USART1_IRQn,NVIC_EncodePriority(7-2,1,1));
	NVIC_EnableIRQ(USART1_IRQn);
	USART_ITConfig(USART1,USART_IT_RXNE,ENABLE);/*接收中断*/
	USART_ITConfig(USART1,USART_IT_IDLE,ENABLE);/*空闲中断*/
	
	/*使能USART1*/
	USART_Cmd(USART1, ENABLE);
}



void USART1_IRQHandler(void)
{
	u8 data;
	if(USART_GetITStatus(USART1,USART_IT_RXNE) )						/*判断是否接收中断*/
	{
		u1rec_buf.rec_str[u1rec_buf.len] = USART_ReceiveData(USART1);	/*储存接收的数据并自动清零标志位*/
		u1rec_buf.len++;
	}
	if(USART_GetITStatus(USART1,USART_IT_IDLE))							/*判断是否空闲中断*/
	{
		/*清零标志位*/
		data = USART1->SR;
		data = USART1->DR;
		u1rec_buf.rec_str[u1rec_buf.len] = 0;
		u1rec_buf.flag = 1;
		u1rec_buf.len = 0;
	}
}

/********************************************************************
* 	使printf函数可被使用
********************************************************************/
int fputc(int ch , FILE *stream)
{
	while((USART1->SR &(0X1 << 7)) == 0);
	USART1->DR = ch;
	while((USART1->SR &(0X1 << 6)) == 0);
	return ch; 
}



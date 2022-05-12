/*********************************************************************
*@Author			: chenjiaru
*@Data				: 2022-05-11 14:30
*@LastWditTime		: 2022-05-12 12:46
*@Description		: All of the function about usart in this file
*********************************************************************/


#include "usart.h"

/********************************************************************
*	ȫ�ֱ���
********************************************************************/
rec_info u1rec_buf;		/*�ṹ�壬USART1����������Ϣ����*/


/********************************************************************
* \brief			usart1 init
* \param[in]		none
* \return			none
* \hideinitializer
********************************************************************/
void Usart1_Init(void)
{
	/*��GPIOA����ʱ��*/
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
	
	/*����USART1��TX�ܽ�*/
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_9;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_10MHz;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
	GPIO_Init(GPIOA, &GPIO_InitStructure);
	
	/*����USART1��RX�ܽ�*/
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_10;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
	GPIO_Init(GPIOA, &GPIO_InitStructure);
	
	/*��USART1����ʱ��*/
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_USART1, ENABLE);
	
	/*����USART1����*/
	USART_InitTypeDef USART_InitStructure;
	USART_InitStructure.USART_BaudRate = 115200;							/*������*/
	USART_InitStructure.USART_WordLength = USART_WordLength_8b;				/*8λ����λ*/
	USART_InitStructure.USART_StopBits = USART_StopBits_1;					/*1λֹͣλ*/
	USART_InitStructure.USART_Parity = USART_Parity_No;						/*����żУ��*/
	USART_InitStructure.USART_HardwareFlowControl =USART_HardwareFlowControl_None;/*��Ӳ������*/
	USART_InitStructure.USART_Mode = USART_Mode_Tx | USART_Mode_Rx;			/*�ɷ��Ϳɽ���*/
	USART_Init(USART1, &USART_InitStructure);
	
	/*�����ж����*/
	NVIC_SetPriority(USART1_IRQn,NVIC_EncodePriority(7-2,1,1));
	NVIC_EnableIRQ(USART1_IRQn);
	USART_ITConfig(USART1,USART_IT_RXNE,ENABLE);/*�����ж�*/
	USART_ITConfig(USART1,USART_IT_IDLE,ENABLE);/*�����ж�*/
	
	/*ʹ��USART1*/
	USART_Cmd(USART1, ENABLE);
}



void USART1_IRQHandler(void)
{
	u8 data;
	if(USART_GetITStatus(USART1,USART_IT_RXNE) )						/*�ж��Ƿ�����ж�*/
	{
		u1rec_buf.rec_str[u1rec_buf.len] = USART_ReceiveData(USART1);	/*������յ����ݲ��Զ������־λ*/
		u1rec_buf.len++;
	}
	if(USART_GetITStatus(USART1,USART_IT_IDLE))							/*�ж��Ƿ�����ж�*/
	{
		/*�����־λ*/
		data = USART1->SR;
		data = USART1->DR;
		u1rec_buf.rec_str[u1rec_buf.len] = 0;
		u1rec_buf.flag = 1;
		u1rec_buf.len = 0;
	}
}

/********************************************************************
* 	ʹprintf�����ɱ�ʹ��
********************************************************************/
int fputc(int ch , FILE *stream)
{
	while((USART1->SR &(0X1 << 7)) == 0);
	USART1->DR = ch;
	while((USART1->SR &(0X1 << 6)) == 0);
	return ch; 
}



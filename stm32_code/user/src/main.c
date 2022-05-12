/*********************************************************************
*@Author			: chenjiaru
*@Data				: 2022-05-11 14:30
*@LastWditTime		: 2022-05-12 12:46
*@Description		: All of the function about usart in this file
*********************************************************************/


#include "main.h"


int main(void)
{
	NVIC_SetPriorityGrouping(7-2);
	Usart1_Init();
	
	
	
	while(1)
	{
		if(u1rec_buf.flag)//如果串口接收完成
		{
			u1rec_buf.flag = 0;
			printf("MCU recieve %s\r\n",u1rec_buf.rec_str);
		}
	
	}


}



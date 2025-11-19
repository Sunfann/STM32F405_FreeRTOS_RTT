/******************************************************************************
 * 文 件 名 : Main.c
 *
 * 版权说明 : 版权所有(c) 
 *
 * 文件描述 : 主函数模块
 *
 * 修改日志 :
 * ====================
 *     V1.00.00 2025-11-8
 *
 * 其    它 :
 *
 ******************************************************************************/



/******************************************************************************
*
* 函 数 名 : main
*
* 函数功能 : 主函数
*
* 参    数 : 无
*
* 返 回 值 : 无
*
* 其    它 :  串口打印输出验证
*
******************************************************************************/
//#include "stm32f4xx.h"
//#include "usart.h"
//#include "delay.h"

//ALIENTEK 探索者STM32F407开发板 实验0
//STM32F4工程模板-库函数版本
//技术支持：www.openedv.com
//淘宝店铺：http://eboard.taobao.com
//广州市星翼电子科技有限公司  
//作者：正点原子 @ALIENTEK

//int main(void)
//{
//	u32 t=0;
//	uart_init(115200);
//	delay_init(84);
//	
//  while(1){
//    printf("t:%d\r\n",t);
//		delay_ms(500);
//		t++;
//	}
//}

/******************************************************************************
*
* 函 数 名 : main
*
* 函数功能 : 主函数
*
* 参    数 : 无
*
* 返 回 值 : 无
*
* 其    它 : 
*
******************************************************************************/
////手册中讲解到步骤15的时候的main.c源码如下：
//#include "stm32f4xx.h"
//#include "SEGGER_RTT.h"
//#include "stdio.h" // 重定向printf
////ALIENTEK 探索者STM32F407开发板 实验0
////STM32F4工程模板-库函数版本
////技术支持：www.openedv.com
////淘宝店铺：http://eboard.taobao.com
////广州市星翼电子科技有限公司  
////作者：正点原子 @ALIENTEK
//  
//void Delay(__IO uint32_t nCount);

//void Delay(__IO uint32_t nCount)
//{
//  while(nCount--){}
//}

//int main(void)
//{
//  GPIO_InitTypeDef  GPIO_InitStructure;
//  RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF, ENABLE);

//  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_9 | GPIO_Pin_10;
//  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;
//  GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
//  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;
//  GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;
//  GPIO_Init(GPIOF, &GPIO_InitStructure);
//	
//	SEGGER_RTT_Init();

//  while(1){
//		GPIO_SetBits(GPIOF,GPIO_Pin_9|GPIO_Pin_10);
//		Delay(0x7FFFFF);
//		GPIO_ResetBits(GPIOF,GPIO_Pin_9|GPIO_Pin_10);
//		Delay(0x7FFFFF);
//	
//	}
//}

/******************************************************************************
*
* 函 数 名 : main
*
* 函数功能 : 主函数
*
* 参    数 : 无
*
* 返 回 值 : 无
*
* 其    它 :
*
******************************************************************************/
////#define MAIN_C
//#include <stdio.h>
//#include "SEGGER_RTT.h"

//volatile int _Cnt;

//int main(void) 
//{

//  SEGGER_RTT_ConfigUpBuffer(0, NULL, NULL, 0, SEGGER_RTT_MODE_BLOCK_IF_FIFO_FULL);

//  SEGGER_RTT_WriteString(0, "SEGGER Real-Time-Terminal Sample\r\n\r\n");
//  SEGGER_RTT_WriteString(0, "###### Testing SEGGER_printf() ######\r\n");

//  SEGGER_RTT_printf(0, "printf Test: %%c,         'S' : %c.\r\n", 'S');
//  SEGGER_RTT_printf(0, "printf Test: %%5c,        'E' : %5c.\r\n", 'E');
//  SEGGER_RTT_printf(0, "printf Test: %%-5c,       'G' : %-5c.\r\n", 'G');
//  SEGGER_RTT_printf(0, "printf Test: %%5.3c,      'G' : %-5c.\r\n", 'G');
//  SEGGER_RTT_printf(0, "printf Test: %%.3c,       'E' : %-5c.\r\n", 'E');
//  SEGGER_RTT_printf(0, "printf Test: %%c,         'R' : %c.\r\n", 'R');

//  SEGGER_RTT_printf(0, "printf Test: %%s,      \"RTT\" : %s.\r\n", "RTT");
//  SEGGER_RTT_printf(0, "printf Test: %%s, \"RTT\\r\\nRocks.\" : %s.\r\n", "RTT\r\nRocks.");

//  SEGGER_RTT_printf(0, "printf Test: %%u,       12345 : %u.\r\n", 12345);
//  SEGGER_RTT_printf(0, "printf Test: %%+u,      12345 : %+u.\r\n", 12345);
//  SEGGER_RTT_printf(0, "printf Test: %%.3u,     12345 : %.3u.\r\n", 12345);
//  SEGGER_RTT_printf(0, "printf Test: %%.6u,     12345 : %.6u.\r\n", 12345);
//  SEGGER_RTT_printf(0, "printf Test: %%6.3u,    12345 : %6.3u.\r\n", 12345);
//  SEGGER_RTT_printf(0, "printf Test: %%8.6u,    12345 : %8.6u.\r\n", 12345);
//  SEGGER_RTT_printf(0, "printf Test: %%08u,     12345 : %08u.\r\n", 12345);
//  SEGGER_RTT_printf(0, "printf Test: %%08.6u,   12345 : %08.6u.\r\n", 12345);
//  SEGGER_RTT_printf(0, "printf Test: %%0u,      12345 : %0u.\r\n", 12345);
//  SEGGER_RTT_printf(0, "printf Test: %%-.6u,    12345 : %-.6u.\r\n", 12345);
//  SEGGER_RTT_printf(0, "printf Test: %%-6.3u,   12345 : %-6.3u.\r\n", 12345);
//  SEGGER_RTT_printf(0, "printf Test: %%-8.6u,   12345 : %-8.6u.\r\n", 12345);
//  SEGGER_RTT_printf(0, "printf Test: %%-08u,    12345 : %-08u.\r\n", 12345);
//  SEGGER_RTT_printf(0, "printf Test: %%-08.6u,  12345 : %-08.6u.\r\n", 12345);
//  SEGGER_RTT_printf(0, "printf Test: %%-0u,     12345 : %-0u.\r\n", 12345);

//  SEGGER_RTT_printf(0, "printf Test: %%u,      -12345 : %u.\r\n", -12345);
//  SEGGER_RTT_printf(0, "printf Test: %%+u,     -12345 : %+u.\r\n", -12345);
//  SEGGER_RTT_printf(0, "printf Test: %%.3u,    -12345 : %.3u.\r\n", -12345);
//  SEGGER_RTT_printf(0, "printf Test: %%.6u,    -12345 : %.6u.\r\n", -12345);
//  SEGGER_RTT_printf(0, "printf Test: %%6.3u,   -12345 : %6.3u.\r\n", -12345);
//  SEGGER_RTT_printf(0, "printf Test: %%8.6u,   -12345 : %8.6u.\r\n", -12345);
//  SEGGER_RTT_printf(0, "printf Test: %%08u,    -12345 : %08u.\r\n", -12345);
//  SEGGER_RTT_printf(0, "printf Test: %%08.6u,  -12345 : %08.6u.\r\n", -12345);
//  SEGGER_RTT_printf(0, "printf Test: %%0u,     -12345 : %0u.\r\n", -12345);
//  SEGGER_RTT_printf(0, "printf Test: %%-.6u,   -12345 : %-.6u.\r\n", -12345);
//  SEGGER_RTT_printf(0, "printf Test: %%-6.3u,  -12345 : %-6.3u.\r\n", -12345);
//  SEGGER_RTT_printf(0, "printf Test: %%-8.6u,  -12345 : %-8.6u.\r\n", -12345);
//  SEGGER_RTT_printf(0, "printf Test: %%-08u,   -12345 : %-08u.\r\n", -12345);
//  SEGGER_RTT_printf(0, "printf Test: %%-08.6u, -12345 : %-08.6u.\r\n", -12345);
//  SEGGER_RTT_printf(0, "printf Test: %%-0u,    -12345 : %-0u.\r\n", -12345);

//  SEGGER_RTT_printf(0, "printf Test: %%d,      -12345 : %d.\r\n", -12345);
//  SEGGER_RTT_printf(0, "printf Test: %%+d,     -12345 : %+d.\r\n", -12345);
//  SEGGER_RTT_printf(0, "printf Test: %%.3d,    -12345 : %.3d.\r\n", -12345);
//  SEGGER_RTT_printf(0, "printf Test: %%.6d,    -12345 : %.6d.\r\n", -12345);
//  SEGGER_RTT_printf(0, "printf Test: %%6.3d,   -12345 : %6.3d.\r\n", -12345);
//  SEGGER_RTT_printf(0, "printf Test: %%8.6d,   -12345 : %8.6d.\r\n", -12345);
//  SEGGER_RTT_printf(0, "printf Test: %%08d,    -12345 : %08d.\r\n", -12345);
//  SEGGER_RTT_printf(0, "printf Test: %%08.6d,  -12345 : %08.6d.\r\n", -12345);
//  SEGGER_RTT_printf(0, "printf Test: %%0d,     -12345 : %0d.\r\n", -12345);
//  SEGGER_RTT_printf(0, "printf Test: %%-.6d,   -12345 : %-.6d.\r\n", -12345);
//  SEGGER_RTT_printf(0, "printf Test: %%-6.3d,  -12345 : %-6.3d.\r\n", -12345);
//  SEGGER_RTT_printf(0, "printf Test: %%-8.6d,  -12345 : %-8.6d.\r\n", -12345);
//  SEGGER_RTT_printf(0, "printf Test: %%-08d,   -12345 : %-08d.\r\n", -12345);
//  SEGGER_RTT_printf(0, "printf Test: %%-08.6d, -12345 : %-08.6d.\r\n", -12345);
//  SEGGER_RTT_printf(0, "printf Test: %%-0d,    -12345 : %-0d.\r\n", -12345);

//  SEGGER_RTT_printf(0, "printf Test: %%x,      0x1234ABC : %x.\r\n", 0x1234ABC);
//  SEGGER_RTT_printf(0, "printf Test: %%+x,     0x1234ABC : %+x.\r\n", 0x1234ABC);
//  SEGGER_RTT_printf(0, "printf Test: %%.3x,    0x1234ABC : %.3x.\r\n", 0x1234ABC);
//  SEGGER_RTT_printf(0, "printf Test: %%.6x,    0x1234ABC : %.6x.\r\n", 0x1234ABC);
//  SEGGER_RTT_printf(0, "printf Test: %%6.3x,   0x1234ABC : %6.3x.\r\n", 0x1234ABC);
//  SEGGER_RTT_printf(0, "printf Test: %%8.6x,   0x1234ABC : %8.6x.\r\n", 0x1234ABC);
//  SEGGER_RTT_printf(0, "printf Test: %%08x,    0x1234ABC : %08x.\r\n", 0x1234ABC);
//  SEGGER_RTT_printf(0, "printf Test: %%08.6x,  0x1234ABC : %08.6x.\r\n", 0x1234ABC);
//  SEGGER_RTT_printf(0, "printf Test: %%0x,     0x1234ABC : %0x.\r\n", 0x1234ABC);
//  SEGGER_RTT_printf(0, "printf Test: %%-.6x,   0x1234ABC : %-.6x.\r\n", 0x1234ABC);
//  SEGGER_RTT_printf(0, "printf Test: %%-6.3x,  0x1234ABC : %-6.3x.\r\n", 0x1234ABC);
//  SEGGER_RTT_printf(0, "printf Test: %%-8.6x,  0x1234ABC : %-8.6x.\r\n", 0x1234ABC);
//  SEGGER_RTT_printf(0, "printf Test: %%-08x,   0x1234ABC : %-08x.\r\n", 0x1234ABC);
//  SEGGER_RTT_printf(0, "printf Test: %%-08.6x, 0x1234ABC : %-08.6x.\r\n", 0x1234ABC);
//  SEGGER_RTT_printf(0, "printf Test: %%-0x,    0x1234ABC : %-0x.\r\n", 0x1234ABC);

//  SEGGER_RTT_printf(0, "printf Test: %%p,      &_Cnt      : %p.\r\n", &_Cnt);

//  SEGGER_RTT_WriteString(0, "###### SEGGER_printf() Tests done. ######\r\n");
//  do {
//    _Cnt++;
//  } while (1);
//}



/******************************************************************************
*
* 函 数 名 : main
*
* 函数功能 : 主函数
*
* 参    数 : 无
*
* 返 回 值 : 无
*
* 其    它 :
*
******************************************************************************/
#include "FreeRTOS.h"
#include "task.h"
#include "stm32f4xx.h"
#include "DEBUG_RTT.h"


volatile uint32_t PC13_State = 0;

void vApplicationStackOverflowHook(TaskHandle_t xTask, char *pcTaskName)
{
    (void)xTask;
    (void)pcTaskName;
    
    while(1); 
}


void vApplicationMallocFailedHook(void)
{
    while(1);
}


void vApplicationIdleHook(void)
{
   
}


void vApplicationTickHook(void)
{
   
}

void vTaskLed(void *pvParameters);

int main(void)
{
		DBG_INIT();

	  GPIO_InitTypeDef GPIO_InitStruct;
    RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC, ENABLE);

    GPIO_InitStruct.GPIO_Pin = GPIO_Pin_13;
    GPIO_InitStruct.GPIO_Mode = GPIO_Mode_OUT;
    GPIO_InitStruct.GPIO_OType = GPIO_OType_PP;
    GPIO_InitStruct.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_InitStruct.GPIO_PuPd = GPIO_PuPd_NOPULL;
    GPIO_Init(GPIOC, &GPIO_InitStruct);
	
    GPIO_ResetBits(GPIOC, GPIO_Pin_13);

    if (xTaskCreate(vTaskLed, "LED", 128, NULL, 1, NULL) != pdPASS) 
		{
        while(1);
    }
    DBG_PRINTF("=== RTT Debug System Test Started ===\n");
//		SEGGER_RTT_ConfigUpBuffer(1, "JScope_u4", &JS_RTT_UpBuffer[0], \
//  										sizeof(JS_RTT_UpBuffer), SEGGER_RTT_MODE_BLOCK_IF_FIFO_FULL);
		DBG_JS_CFG(JScope_u4);
    vTaskStartScheduler();
    
    while(1);
}

void vTaskLed(void *pvParameters)
{
	
		TickType_t startTime, endTime;
    TickType_t elapsedTime;
	
    for(;;) 
		{
				startTime = xTaskGetTickCount();
        GPIO_ToggleBits(GPIOC, GPIO_Pin_13);
				PC13_State = (GPIOC->ODR & GPIO_Pin_13) ? 1 : 0;
				//DBG_WRITE(PC13_State);
				vTaskDelay(pdMS_TO_TICKS(1000));
				endTime = xTaskGetTickCount();
				elapsedTime = endTime - startTime;
				uint32_t elapsedMs = elapsedTime * portTICK_PERIOD_MS;
				DBG_WRITE(elapsedMs);
				DBG_INFO("duration = %d\n",elapsedMs);
				//DBG_INFO("PC13_State = %d\n",PC13_State);
    }
}



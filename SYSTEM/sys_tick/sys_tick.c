/**
  * @file    sys_tick.c
  * @brief   用于STM32标准库的SysTick延时和计时功能
  */

#include "stm32f4xx.h" // 根据你的具体芯片型号包含对应的头文件

// 定义全局变量，用于记录系统运行的毫秒数
static __IO uint32_t sys_tick = 0;

/**
  * @brief  初始化SysTick定时器，使其每1ms产生一次中断
  * @param  无
  * @retval 无
  */
void SysTick_Init(void)
{
  /* SystemCoreClock / 1000     -> 1ms中断一次
   * SystemCoreClock / 1000000  -> 1us中断一次
   */
  if (SysTick_Config(SystemCoreClock / 1000)) {
    /* Capture error */
    while (1);
  }
  
  // 可选：设置SysTick中断优先级
  NVIC_SetPriority(SysTick_IRQn, 0); // 通常设置为最高优先级
}

/**
  * @brief  获取系统自启动后运行的毫秒数
  * @param  无
  * @retval 当前的系统tick值（毫秒）
  */
uint32_t GetTick_ms(void)
{
  return sys_tick;
}

/**
  * @brief  毫秒级延时
  * @param  ms: 要延时的毫秒数
  * @retval 无
  */
void Delay_ms(uint32_t ms)
{
  uint32_t start_tick = sys_tick;
  // 注意处理计数器回绕的情况
  while ((sys_tick - start_tick) < ms) {
    // 空循环，等待时间到达
  }
}

/**
  * @brief  SysTick中断服务函数
  * @note   此函数必须被SysTick_Handler调用
  * @param  无
  * @retval 无
  */
void SysTick_Update(void)
{
  sys_tick++;
}

// 注意：确保你的启动文件或中断向量表将SysTick_Handler指向了正确的处理函数。
// 在标准库的启动文件中，通常已定义SysTick_Handler为弱符号，你可以在任意文件中重写它。
__weak void SysTick_Handler(void)
{
  SysTick_Update();
}



#ifndef __SYS_TICK_H
#define __SYS_TICK_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

void SysTick_Init(void);
uint32_t GetTick_ms(void);
void Delay_ms(uint32_t ms);
void SysTick_Update(void); // 通常只在中断服务程序内调用，但声明在此

#ifdef __cplusplus
}
#endif

#endif /* __SYS_TICK_H */


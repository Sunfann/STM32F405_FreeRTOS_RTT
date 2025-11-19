#ifndef DEBUG_RTT_H
#define DEBUG_RTT_H

// ==================== 配置开关 ====================
// 发布时注释掉这行，调试时取消注释
#define USE_RTT_DEBUG

// ==================== 条件编译实现 ====================
#ifdef USE_RTT_DEBUG
    #include "SEGGER_RTT.h"


	// ==================== RTT 终端分配 ====================
	#define TERMINAL_ERROR     1   // 错误信息终端 (红色)
	#define TERMINAL_WARNING   2   // 警告信息终端 (黄色)  
	#define TERMINAL_INFO      3   // 普通信息终端 (绿色)
	#define TERMINAL_DEBUG     4   // 调试信息终端 (蓝色)
	#define TERMINAL_VERBOSE   5   // 详细调试终端 (白色)
	#define TERMINAL_JSCOPE    6   // J-Scope 数据终端

	
    // debug_levels
    typedef enum {
        DBG_LEVEL_NONE = 0,
        DBG_LEVEL_ERROR,
        DBG_LEVEL_WARNING, 
        DBG_LEVEL_INFO,
        DBG_LEVEL_DEBUG,
        DBG_LEVEL_VERBOSE
    } debug_level_t;
		
    // ==================== 编译时设置级别 ====================
    #define CURRENT_DEBUG_LEVEL DBG_LEVEL_VERBOSE

    // 初始化RTT
    #define DBG_INIT()          SEGGER_RTT_Init()

    // 通用调试输出--默认终端0，无颜色
    #define DBG_PRINTF(...)     SEGGER_RTT_SetTerminal(DBG_LEVEL_NONE);SEGGER_RTT_printf(0, __VA_ARGS__)
    #define DBG_WRITE_STR(s)    SEGGER_RTT_SetTerminal(DBG_LEVEL_NONE);SEGGER_RTT_WriteString(0, s)


    // ==================== 条件调试宏 - 分级、分终端、分颜色调试 ====================
    #if (CURRENT_DEBUG_LEVEL >= DBG_LEVEL_ERROR)
    #define DBG_ERROR(...)       SEGGER_RTT_SetTerminal(TERMINAL_ERROR); \
									SEGGER_RTT_printf(0, "\x1b[31m[ERR] " __VA_ARGS__); \
							            SEGGER_RTT_printf(0, "\x1b[0m");   // 红色
    #else
    #define DBG_ERROR(...)       do {} while(0)
    #endif

    #if (CURRENT_DEBUG_LEVEL >= DBG_LEVEL_WARNING)
    #define DBG_WARNING(...)     SEGGER_RTT_SetTerminal(TERMINAL_WARNING); \
									SEGGER_RTT_printf(0, "\x1b[33m[WAR] " __VA_ARGS__); \
										SEGGER_RTT_printf(0, "\x1b[0m"); // 黄色
    #else
    #define DBG_WARNING(...)     do {} while(0)
    #endif

    #if (CURRENT_DEBUG_LEVEL >= DBG_LEVEL_INFO)  
    #define DBG_INFO(...)        SEGGER_RTT_SetTerminal(TERMINAL_INFO); \
									SEGGER_RTT_printf(0, "\x1b[34m[INFO] " __VA_ARGS__); \
										SEGGER_RTT_printf(0, "\x1b[0m");  // 蓝色
    #else
    #define DBG_INFO(...)        do {} while(0)
    #endif

    // 更多调试级别：
    #if (CURRENT_DEBUG_LEVEL >= DBG_LEVEL_DEBUG)
    #define DBG_DEBUG(...)       SEGGER_RTT_SetTerminal(TERMINAL_DEBUG); \
									SEGGER_RTT_printf(0, "\x1b[32m[DBG] " __VA_ARGS__); \
										SEGGER_RTT_printf(0, "\x1b[0m");  // 绿色
    #else
    #define DBG_DEBUG(...)       do {} while(0)
    #endif

    #if (CURRENT_DEBUG_LEVEL >= DBG_LEVEL_VERBOSE)
    #define DBG_VERBOSE(...)     SEGGER_RTT_SetTerminal(TERMINAL_VERBOSE); \
									SEGGER_RTT_printf(0, "\x1b[36m[VER] " __VA_ARGS__); \
										SEGGER_RTT_printf(0, "\x1b[0m");  // 青色
    #else
    #define DBG_VERBOSE(...)     do {} while(0)
    #endif


	// ==================== J-Scope RTT曲线输出配置参数 ====================

	//J-Scope RTT 参数配置
	char JS_RTT_UpBuffer[4096];    // J-Scope RTT Buffer
	int  JS_RTT_Channel = 1;       // J-Scope RTT Channel

    // J-Scope Terminal Output: 需要实现 J-Scope 的输出接口
    #define DBG_JS_CFG(s) 		SEGGER_RTT_ConfigUpBuffer(JS_RTT_Channel, "s", &JS_RTT_UpBuffer[0], \
  										sizeof(JS_RTT_UpBuffer), SEGGER_RTT_MODE_BLOCK_IF_FIFO_FULL);
	#define DBG_WRITE(s) 		SEGGER_RTT_Write(JS_RTT_Channel, &s, sizeof(s));

#else
    // 发布版本 - 空实现，不产生任何代码
    #define DBG_INIT()          do {} while(0)
    #define DBG_PRINTF(...)     do {} while(0)
    #define DBG_WRITE_STR(s)    do {} while(0)  
    #define DBG_ERROR(...)      do {} while(0)
    #define DBG_WARNING(...)    do {} while(0)
    #define DBG_INFO(...)       do {} while(0)
    #define DBG_DEBUG(...)      do {} while(0)
    #define DBG_VERBOSE(...)    do {} while(0)
	#define DBG_JS_CFG(...)     do {} while(0)
    #define DBG_WRITE(...)    	do {} while(0)

#endif

#endif//DEBUG_RTT_H



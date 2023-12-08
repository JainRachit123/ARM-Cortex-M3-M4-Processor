/*
 * main.h
 *
 *  Created on: Dec 5, 2023
 *      Author: jainr
 */

#ifndef MAIN_H_
#define MAIN_H_

#define NO_OF_TASK			4

#define SIZE_TASK_STACK 	1024U
#define SIZE_SCHED_STACK 	1024U

#define SRAM_START 			0x20000000U
#define SIZE_SRAM 			((128) * (1024))
#define SRAM_END 			((SRAM_START) + (SIZE_SRAM))

#define T1_STACK_START 		(SRAM_END)
#define T1_STACK_END 		((SRAM_END) - (SIZE_TASK_STACK))
#define T2_STACK_START 		(T1_STACK_END)
#define T2_STACK_END		((T1_STACK_END) - (SIZE_TASK_STACK))
#define T3_STACK_START 		(T2_STACK_END)
#define T3_STACK_END		((T2_STACK_END) - (SIZE_TASK_STACK))
#define T4_STACK_START 		(T3_STACK_END)
#define T4_STACK_END		((T3_STACK_END) - (SIZE_TASK_STACK))

#define IDLE_STACK_START	(T4_STACK_END)
#define IDLE_STACK_END		((T4_STACK_END) - (SIZE_SCHED_STACK))

#define SCHED_STACK_START	(IDLE_STACK_END)

#define SYSTICK_TIME		16000000U
#define TICK_HZ 			1000U

#define MAX_TASK			5

#define RUNNING_STATE		1
#define BLOCKED_STATE		0

#endif /* MAIN_H_ */

/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>
#include <stdio.h>

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

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
#define T4_STACK_START 		(T3_SsTACK_END)
#define T4_STACK_END		((T3_STACK_END) - (SIZE_TASK_STACK))

#define SCHED_STACK_START	((T4_STACK_END) - (SIZE_SCHED_STACK))


void task1_handler(void);
void task2_handler(void);
void task3_handler(void);
void task4_handler(void);

void task1_handler(void) {
	while(1){
		printf("In Task 1\n");
	}
}

void task2_handler(void) {
	while(1){
		printf("In Task 2\n");
	}
}

void task3_handler(void) {
	while(1){
		printf("In Task 3\n");
	}
}

void task4_handler(void) {
	while(1){
		printf("In Task 4\n");
	}
}

int main(void)
{
    /* Loop forever */
	for(;;);
}

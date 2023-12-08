/*
 * main.h
 *
 *  Created on: Sep 3, 2023
 *      Author: jainr
 */

#ifndef MAIN_H_
#define MAIN_H_

#include <stdint.h>

typedef struct {
	uint32_t gpioaEN: 1;
	uint32_t gpiobEN: 1;
	uint32_t gpiocEN: 1;
	uint32_t gpiodEN: 1;
	uint32_t gpioeEN: 1;
	uint32_t gpiofEN: 1;
	uint32_t gpiogEN: 1;
	uint32_t gpiohEN: 1;
	uint32_t gpioiEN: 1;
	uint32_t reserved1: 3;
	uint32_t crcEN: 1;
	uint32_t reserved2: 3;
	uint32_t reserved3: 2;
	uint32_t bkpsramEN: 1;
	uint32_t res: 1;
	uint32_t ccmdataramEN: 1;
	uint32_t dma1EN: 1;
	uint32_t dma2EN: 1;
	uint32_t reserved4: 2;
	uint32_t ethmacEN: 1;
	uint32_t ethmactxEN: 1;
	uint32_t ethmacrxEN: 1;
	uint32_t ethmacptpEN: 1;
	uint32_t otghsEN: 1;
	uint32_t otghsulpiEN: 1;
	uint32_t reserved5: 1;
}RCC_AHB1ENR_t;

typedef struct {
	uint32_t modeR0: 2;
	uint32_t modeR1: 2;
	uint32_t modeR2: 2;
	uint32_t modeR3: 2;
	uint32_t modeR4: 2;
	uint32_t modeR5: 2;
	uint32_t modeR6: 2;
	uint32_t modeR7: 2;
	uint32_t modeR8: 2;
	uint32_t modeR9: 2;
	uint32_t modeR10: 2;
	uint32_t modeR11: 2;
	uint32_t modeR12: 2;
	uint32_t modeR13: 2;
	uint32_t modeR14: 2;
	uint32_t modeR15: 2;
}GPIOx_MODER_t;

typedef struct {
	uint32_t odR0: 1;
	uint32_t odR1: 1;
	uint32_t odR2: 1;
	uint32_t odR3: 1;
	uint32_t odR4: 1;
	uint32_t odR5: 1;
	uint32_t odR6: 1;
	uint32_t odR7: 1;
	uint32_t odR8: 1;
	uint32_t odR9: 1;
	uint32_t odR10: 1;
	uint32_t odR11: 1;
	uint32_t odR12: 1;
	uint32_t odR13: 1;
	uint32_t odR14: 1;
	uint32_t odR15: 1;
	uint32_t reserved: 16;
}GPIOx_ODR_t;

#endif /* MAIN_H_ */

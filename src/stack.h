/*
 * stack.h
 *
 *  Created on: Dec 26, 2021
 *      Author: Khaled Ali
 */

#ifndef STACK_H_
#define STACK_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define MAX_SIZE 1000

void push(uint8_t u8_data);

uint8_t pop(void);

uint8_t isEmpty(void);

void printStack(void);

#endif /* STACK_H_ */

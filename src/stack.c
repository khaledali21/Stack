/*
 ============================================================================
 Name        : stack.c
 Author      : Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "stack.h"
uint8_t au8_stack[MAX_SIZE];
int8_t s8_top = -1;
void push(uint8_t data){
	if(s8_top + 1 < MAX_SIZE){
		au8_stack[++s8_top] = data;
	}
}
uint8_t pop(void){
	if(s8_top > -1){
		return au8_stack[s8_top--];
	}
	else{
		return -1;
	}
}

uint8_t isEmpty(void){
	if(s8_top > -1){
		return 0;
	}
	else{
		return 1;
	}
}

void printStack(void){
	uint8_t* pu8_index = au8_stack;
	while(*pu8_index){
		printf("%c ", *pu8_index);
		pu8_index++;
	}
	printf("\n");
}






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
uint8_t stack[MAX_SIZE];
int8_t top = -1;
void push(uint8_t data){
	if(top + 1 < MAX_SIZE){
		stack[++top] = data;
	}
}
uint8_t pop(void){
	if(top > -1){
		return stack[top--];
	}
	else{
		return -1;
	}
}

uint8_t isEmpty(void){
	if(top > -1){
		return 0;
	}
	else{
		return 1;
	}
}

void printStack(void){
	uint8_t* index = stack;
	while(*index){
		printf("%c ", *index);
		index++;
	}
	printf("\n");
}






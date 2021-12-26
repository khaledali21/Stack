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

/*
 * brief: this function takes an item of time unsigned char and push it to the stack
 * param. :(input) a single input the item to be pushed
 */
void push(uint8_t data){
	if(s8_top + 1 < MAX_SIZE){
		au8_stack[++s8_top] = data;
	}
}
/*
 * brief: this function removes an item from the stack
 * return: (output) the items that was removed or -1 if the stack was empty
 */
uint8_t pop(void){
	if(s8_top > -1){
		return au8_stack[s8_top--];
	}
	else{
		return -1;
	}
}
/*
 * brief: this function checks if the stack is empty or not
 * return: (output) 1 if the stack is empty and 0 otherwise
 */
uint8_t isEmpty(void){
	if(s8_top > -1){
		return 0;
	}
	else{
		return 1;
	}
}
/*
 * brief: this function prints the elements in the stack
 */
void printStack(void){
	uint8_t* pu8_index = au8_stack;
	while(*pu8_index){
		printf("%c ", *pu8_index);
		pu8_index++;
	}
	printf("\n");
}






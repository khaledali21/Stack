/*
 * main.c
 *
 *  Created on: Dec 26, 2021
 *      Author: Khaled Ali
 */

#include "stack.h"
#include "main.h"
int main(void) {
	uint8_t au8_expression[100];
	printf("Enter the expression: ");
	fflush(stdout);
	gets(au8_expression);
	uint8_t *it = au8_expression;
	printf("%s", balancedParentheses(it));
	return 0;
}

/*
 * brief: this function checks if an expression is balanced or not
 * param. : (input) A pointer to the expression to be checked
 * return: (output) A pointer to the string Balanced or Not Balanced depending on the check
 */
uint8_t* balancedParentheses(uint8_t* pu8_expression){

	while(*pu8_expression){
		if(*pu8_expression == '{' || *pu8_expression == '[' || *pu8_expression == '('){
			push(*pu8_expression);
		}
		else if(*pu8_expression == '}' || *pu8_expression == ']' || *pu8_expression == ')'){
			if(isEmpty()){
				return "Not Balanced";
			}
			else{
				uint8_t u8_data = pop();
				 if((u8_data == '{' && *pu8_expression == '}') ||
					(u8_data == '[' && *pu8_expression == ']') ||
					(u8_data == '(' && *pu8_expression == ')'))
				{
					pu8_expression++;
					continue;
				}
				 else{
					 return "Not Balanced";
				 }
			}
		}
		pu8_expression++;
	}
	if(isEmpty()){
		return "Balanced";
	}
	else{
		return "Not Balanced";
	}
}

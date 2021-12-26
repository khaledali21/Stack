/*
 * main.c
 *
 *  Created on: Dec 26, 2021
 *      Author: Khaled Ali
 */

#include "stack.h"
#include "main.h"
int main(void) {
	uint8_t expression[100];
	printf("Enter the expression: ");
	fflush(stdout);
	gets(expression);
	uint8_t *it = expression;
	printf("%s", balancedParentheses(it));
	return 0;
}


uint8_t* balancedParentheses(uint8_t* expression){

	while(*expression){
		if(*expression == '{' || *expression == '[' || *expression == '('){
			push(*expression);
		}
		else if(*expression == '}' || *expression == ']' || *expression == ')'){
			if(isEmpty()){
				return "Not Balanced";
			}
			else{
				uint8_t data = pop();
				 if((data == '{' && *expression == '}') ||
					(data == '[' && *expression == ']') ||
					(data == '(' && *expression == ')'))
				{
					expression++;
					continue;
				}
				 else{
					 return "Not Balanced";
				 }
			}
		}
		expression++;
	}
	if(isEmpty()){
		return "Balanced";
	}
	else{
		return "Not Balanced";
	}
}

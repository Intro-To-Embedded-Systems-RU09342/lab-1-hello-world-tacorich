/*
 * math.h
 *
 *  Created on: Aug 22, 2017
 * 	Last Edited: Sept 7, 2018
 *      Author: Russell Trafford
 */

/* Your assignment is to take the math function and implement at least the following functions:
 * + Add (num1 + num2)
 * - Subtract (num1 - num2)
 * * Multiply (num1 * num2)
 * / Divide (num1 / num2)
 * % Modulus (num1 % num2)
 * < Left Shift (num1 << num2)
 * > Right Shift (num1 >> num2)
 * & Bitwise AND (num1 & num2)
 * | Bitwise OR (num1 | num2)
 * ^ Bitwise XOR (num1 ^ num2)
 * ~ Bitwise Inverse (~num1) for this operation, num1 and num2 are still needed
*/

#ifndef MATH_H_
#define MATH_H_

//Part of your documentation should be listing the valid inputs and outputs for the functions you create.
int math(int num1, int num2, char sign);

int main()
{
//Part of your documentation should be listing the valid inputs and outputs for the functions you create.
int num1, num2;
char sign;
float result;

printf("Enter a number:" );
scanf( num1);
printf("\nEnter another number:");
scanf(num2);

printf("\nWhat would you like to do with these numbers?");
scanf(sign);

switch(num1, num2, sign)
{
    case '+': return  num1 + num2;
        
    case '-': return num1 - num2;
    
        
    case '*': return num1 * num2;
        
    case '/': return num1/num2;

    case '%': return num1%num2;
         
    case '<': return num1 << num2;
         
    case '>': return num1 >> num2;
         
    case '&': return num1&num2;
         
    case '|': return num1|num2;
         
    case '^': return num1^num2;

    case '~': return ~num1;
         
    default: 
        printf("\n error");
}
return 0;
}
#endif /* MATH_H_ */


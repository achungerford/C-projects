/*
Modulus operator examples.

dividend / divisor
	if dividend smaller than divisor, remainder = dividend
	aka: if fraction less than 1, remainder = numerator
	sign is always same as dividend, think of numerator

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>



int main(void)
{
	int a, b;
	
	a = 3, b = 5;
	printf("\n%d %% %d: remainder = %d\n", a, b, (a%b));
	
	a = -3, b = 10;
	printf("\n%d %% %d: remainder = %d\n", a, b, (a%b));
	
	a = -7, b = -10;
	printf("\n%d %% %d: remainder = %d\n", a, b, (a%b));
	
	a = 5, b = -3;
	printf("\n%d %% %d: remainder = %d\n", a, b, (a%b));
	
	a = -5, b = -3;
	printf("\n%d %% %d: remainder = %d\n", a, b, (a%b));
	
	
	
	
	
	printf("\n");
	system("pause");
	return 0;
}
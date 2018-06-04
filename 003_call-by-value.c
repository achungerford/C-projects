/*
Call by value - original value is not modified
				changes made to the parameter inside the function has no effect on the argument

				
Call by reference - original value changes
					changes made to the parameter does affect the argument
*/

#include <stdio.h>

void call_by_value(int x);

int main(void)
{
	int a=10;
	
	printf("a = %d before function call_by_value.\n", a);
	
	call_by_value(a);
	
	printf("a = %d after function call_by_value.\n", a);
	
	
	system("pause");
	return 0;
}


void call_by_value(int x)
{
	printf("Inside call_by_value x = %d before adding 10.\n", x);
	x += 10;
	printf("Inside call_by_value x = %d after adding 10.\n", x);
}
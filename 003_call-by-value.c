/*
Call by value - original value is not modified
				changes made to the parameter inside the function has no effect on the argument

	If data is passed by value, the data is copied from the variable used in main()
	to a variable used by the function. So if the data passed (that is stored in the function variable)
	is modified inside the function, the value is only changed in the variable used inside the function.			


Call by reference - original value changes
					changes made to the parameter does affect the argument
*/

#include <stdio.h>

void call_by_value(int x);

int main(void)
{
	int a=100;
	
	printf("\na = %d before call_by_value.\n", a);
	
	call_by_value(a);
	
	printf("\nStill a is unchanged. a = %d after function call_by_value.\n", a);
	printf("Call by value does not change the original.\n");
	
	printf("\n\n");
	system("pause");
	return 0;
}


void call_by_value(int x)
{
	printf("\nInside call_by_value x = %d before adding 50.\n", x);
	x += 50;
	printf("\nInside call_by_value x = %d after adding 50.\n", x);
}
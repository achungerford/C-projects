/*
Call by reference. Using pointers.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


void swap(int* x, int* y);

int main(void)
{
	int a = 100, b = 200;
	
	printf("Before swap: \na = %d \nb = %d", a, b);
	swap(&a, &b);		// passing: address of a, address of b
	printf("\n\nAfter swap():\na = %d \nb = %d", a, b);
	
	
	printf("\n");
	system("pause");
	return 0;
}

// declaring x: pointer to integer. Type = (int*). Stores the address of a.
// declaring y: pointer to integer. Type = (int*). Stores the address of b.
void swap(int* x, int* y)
{
	int temp = *x;		// temp is (int), not pointer. Deferencing x-pointer gives VALUE.
						// temp = 200, it's holding the value of a
						
	*x = *y;
	*y = temp;
	
	printf("\nAfter swap: %d, %d", *x, *y); 
}
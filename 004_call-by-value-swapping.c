/*
Call by value (second example). Swapping values

*/

#include <stdio.h>

void swap(int x, int y);

int main(void)
{
	int a = 10, b = 20;
	
	printf("Before swapping\n a = %d\n b = %d\n\n", a, b);
	
	swap(a, b);
	
	printf("After swap in main()\n a = %d\n b = %d\n", a, b);
	printf(" x and y created inside swap() are not accessible to main()\n");
	printf(" Call by value does not modify the original values\n");
	
	
	printf("\n");
	system("pause");
	return 0;
}


void swap(int x, int y)
{
	int temp = x;	// right now temp has value of 10
	
	x = y;			// right now x has value of 20
	
	y = temp;		// right now y has value of 10
	
	printf("After swap, inside the swap function\n temp = x = 10\n x = y = %d\n y = temp = %d\n\n", x, y);
}
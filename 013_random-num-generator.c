/*
Random integer generator. Formula:

randomNumber = a + rand()%b		where
	a: min number in range
	b: number of items in range (max - min + 1)
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>



int main(void)
{
	srand(time(NULL));
	
	int num;
	
	// random integer 1 to 100
	printf("Random 1 to 100:\n");
	num = 1 + rand()%100;
	printf("%d\n", num);
	
	// random integer 30 to 90
	printf("\nRandom 30 to 90:\n");
	num = 30 + rand()%61;
	printf("%d\n", num);
	
	
	// random integer -5 to 25
	printf("\nRandom -5 to 25:\n");
	num = -5 + rand()%31;
	printf("%d\n", num);
	
	
	
	printf("\n");
	system("pause");
	return 0;
}
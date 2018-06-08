#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
The nested for loop.
*/

int main(void)
{
	
	int i,j,k = 0;
	
	for (i=0; i < 5; i++)
	{
		for(j = i; j < 5; j++)
		{
			printf("j is %d\t", j);
			k++;
			printf("k is %d end--\tj is %d end--", k, j);
			printf("\n");
		}	
	}
	if(k==15)
		printf("\n\n%d", k);
	
	printf("\n");
	system("pause");
	return 0;
}
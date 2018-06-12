#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
declaring pointers
initializing pointers
de-referencing pointers
*/

int main(void)
{
	int a = 42, b = 100;
	
	int *ptrA=NULL, *ptrB=NULL;		// declare ptrA and ptrB, initialize them with NULL values
	
	// initialize ptrA, ptrB with the address of a and b
	ptrA=&a;
	ptrB=&b;
	
	// print address to i --- think of '&' as "address of"
	printf("\n");
	printf("Address of a, %p", &a);
	
	// display address being held in ptrA
	printf("\nptrA holds address to a, %p", ptrA);
	
	// ptrA has it's own address, which is different from the address it is holding
	printf("\nptrA has its own address at %p", &ptrA);
	
	// de-referencing ptrA prints the target value of ptrA.
	printf("\nDe-referencing ptrA --- *ptrA points us to the value stored by a, %d", *ptrA);
	
	// ptrB
	printf("\n\nptrB holds address %p", ptrB);
	printf("\nptrB has its own address at %p", &ptrB);
	printf("\nDe-referencing ptrB -- *ptrB points to value stored by b, %d", *ptrB);
	
	
	/* Now we're assigning the item stored by ptrA in ptrB. So ptrB and ptrA both hold the address of i. */
	ptrB = ptrA;
	printf("\n\nAfter setting ptrB=ptrA we are saying ptrB=ptrA=&a= %p\n", ptrB);
	printf("ptrA holds %p\nptrB holds %p\n", ptrA, ptrB);
	printf("Therefore both point to the same value: ptrA points to value = %d; ptrB points to value = %d\n", *ptrA, *ptrB);
	
	/* summary */
	printf("\n\n--------------------------Summary---------------------------------\n");
	printf("%d = a \t\t %d = b\n", a, b);
	printf("%p = &a \t %p = &b\n\n", &a, &b);
	
	/* make ptrB contain ptrA */
	printf("ptrB=ptrA\n\n");
	
	// after making ptrB=ptrA
	printf("%p = ptrA \t %p = ptrB\n", ptrA, ptrB);
	printf("%d = ptrA value \t %d = ptrB value", *ptrA, *ptrB);
	
	ptrA = &b;
	
	ptrB = NULL;
	
	
	
	
	printf("\n");
	system("pause");
	return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
demonstrate pass-by-address (reference) to pointer
using void return-type.
*/

void changeIt(int have, int *fun);
void changeMe(int *try, int this);
void changeThis(int *mlb, int baseball);

int main(void)
{
	int a = 100, b=100;
	
	// print values of a and b
	printf("%d=a, %d=b", a, b);
	
	
	/* you can pass something by address if you're placing it into a pointer */
	changeIt(a, &b);
	
	/* you can pass something by address if you're placing it into a pointer */
	changeMe(&a, b);
	
	a = 165;
	changeThis(&a, b);
	
	printf("\n");
	system("pause");
	return 0;
}

/* storing a as have, storing &b in fun */
void changeIt(int have, int *fun)
{
	int total;
	
	// 100 + 3 multiplied by value of b
	total = have + 3*(*fun);
	
	printf("\n\n%d", total);
}

/* you can pass something by address if you're placing it into a pointer */
void changeMe(int *try, int this)
{
	int answer;
	
	// 500 - 100 - 200
	answer = 500-*try-this*2;
	
	printf("\n\n%d", answer);
}

void changeThis(int *mlb, int baseball)
{
	printf("\n\n%p", mlb);	// prints address
	printf("\n%d", *mlb);	// prints value stored at address held by mlb
	printf("\n%d", baseball);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
demonstrating pass-by-value
demonstrating that pass-by-value with local manipulations will not alter the original values

demonstrating the 'void' return-type
demonstrating the need to declare local variables in addition to variables used as formal arguments
*/

void changeIt(int you, int tube);
void change(int try, int me);
void changeAgain(int my, int turn);


int main(void)
{
	int x=100, y=100;
	printf("\n");
	
	// display x and y
	printf("%d = x, %d = y\n", x, y);
	
	// passing x and y into changeIt() where x is you, where y is tube
	changeIt(x, y);
	
	// notice how the values of x and y did not change because they couldn't leave the function.
	printf("\n%d = x, %d = y\n\n", x, y);
	
	// notice how this function gives us a sum, but it still hasn't altered the values of x or y.
	change(x, y);
	printf("%d = x, %d = y\n\n", x, y);
	
	// doing another manipulation, but still not altering the values of x or y.
	changeAgain(x, y);
	printf("%d = x, %d = y\n\n", x, y);
	
	
	
	printf("\n");
	system("pause");
	return 0;
}


// this function does not alter the values of x and y above.
void changeIt(int you, int tube)
{
	printf("\n%d = you, %d = tube\n", you, tube);
	you = 500;
	tube = 600;
	printf("%d = you, %d = tube\n", you, tube);
}


// this function also does not alter the values of x and y, but it does utilize their values to print their sum.
void change(int try, int me)
{
	int fun;
	fun = try+me;
	
	printf("%d\n", fun);
}


// this function still does not change the values of x and y, but it again demonstrates that we are utilizing their values.
void changeAgain(int my, int turn)
{
	int again;
	
	again=(2*my)+(3*turn);
	
	printf("%d\n", again);	
}








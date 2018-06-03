/*
Showing that if you put the function definition before
the function call, then you don't need a function prototype/declaration
Warning: not best practices.
*/

#include<stdio.h>


int sum(int x, int y)						// function definition
{
    int s;
    s = x + y;
    return s;
}

int main()
{
    printf("sum = %d", sum(10, 10));		// function call

    system("pause");
    return 0;
}
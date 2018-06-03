/*
If the function definition is after the function call then
you need to include a function declaration/prototype.
*/

#include<stdio.h>

int sum(int x, int y);						// function prototype/declaration

int main()
{
    printf("sum = %d", sum(10, 10));		// function call

    system("pause");
    return 0;
}

int sum(int x, int y)						// function definition
{
    int s;
    s = x + y;
    return s;
}
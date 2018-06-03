/*
Notice the formal argument in the function definition.
Now compare it to the function declaration.
See how the "a" is not required in the declaration?
Variable type is required, but name is not.
*/

#include<stdio.h>
void func_1(int);		// function declaration

int main(void)
{
    int x = 10;

    printf("Before function call\n");
    printf("x = %d\n", x);

    func_1(x);

    printf("After function call\n");
    printf("x = %d\n", x);

    
	system("pause");
    return 0;
}

void func_1(int a)			// function definition
{
    a += 1;		// a = a+1, a = 10+1 = 11
    a++;		// a+1,		a = 11+1 = 12
    printf("\na = %d\n\n", a);
}

/* the X value is unchanged. Why? Bc when a variable is passed to a function
	the function is actually operating on a copy of the variable,
	not the actual variable.
*/
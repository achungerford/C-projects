/*
A preceding space will prevent scanf() from pushing
a non-digit back into the buffer.

It forces scanf() to read all the whitespace characters first
during the user's input.
*/

#include <stdio.h>

int main()
{
    int n;
    char ch;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Enter a character: ");
    scanf(" %c", &ch);				// notice the preceding space

    printf("\n\n");

    printf("n = %d\n", n);
    printf("c = %c\n", ch);

	system("pause");
    return 0;
}
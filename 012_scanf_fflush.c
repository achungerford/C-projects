/*
fflush(stdin);

Flushing the buffer.
*/

#include <stdio.h>

int main()
{
    int n;
    char ch;

    printf("Enter a number: ");
    scanf("%d", &n);

	fflush(stdin);
    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("\n\n");

    printf("n = %d\n", n);
    printf("c = %c\n", ch);

	system("pause");
    return 0;
}


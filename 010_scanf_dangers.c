/*
The perils of scanf(). Notice how the program seems to terminate prematurely
and doesn't let you enter a character?

That's bc scanf() is expecting you to enter a number, but it doesn't know how
many digits your number will be, so it keeps reading until it encounters a
non-digit -- which is 'enter' or '\n' -- in this case. When it sees the \n
it knows it's non-digit so it pushes it back into the buffer.

So the memory buffer now contains '\n' already.

Rule:
The character that is pushed back to the input buffer will be read first by the subsequent calls of scanf().

https://overiq.com/c-programming/101/input-and-output-in-c/
*/

#include <stdio.h>

int main()
{
    int n;
    char ch;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("\n\n");

    printf("n = %d\n", n);
    printf("c = %c\n", ch);

	system("pause");
    return 0;
}
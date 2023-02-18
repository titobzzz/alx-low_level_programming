#include <stdio.h>
#include <ctype.h>
/**
 *  **main - Entry point
 *   **Return: Always 0 (Success)
 *    **task : prints out lower alphabet, Uppercase and next line
 *     **strict : using 3 putchar
 */

int main(void)
{
	int m;
	char n;

	for (m = 0; m <= 9; m++)
	{
		putchar(m + '0');
	}

	for (n = 'a'; n <= 'f'; n++)
	{
		putchar(n);
	}

	putchar('\n');
	return (0);
}

#include <stdio.h>
#include <ctype.h>
/**
 ** main - Entry point
 ** Return: Always 0 (Success)
 ** task : print out decimals
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}

	putchar('\n');
	return (0);
}

#include <stdio.h>
#include <ctype.h>
/**
 ** * main - Entry point
 ** * Return: Always 0 (Success)
 ** * task : print out alphabet except e and q
 */

int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		if (n == 'e' || n == 'q')
		{

		}
		else
		{
			putchar(n);
		}
	}
		putchar('\n');
	return (0);
}

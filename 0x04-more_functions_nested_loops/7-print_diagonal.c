#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * If n is 0 or less, the function should only print a \n
 *
 * @n: is the number of times the character \ should be printed
 *
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');

	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (i == j)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
			{
				_putchar(' ');
			}
		}
	}
}

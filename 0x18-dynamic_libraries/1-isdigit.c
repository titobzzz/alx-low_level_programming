#include <ctype.h>
#include "main.h"

/**
 * _isdigit -  checks for a digit (0 through 9)
 * @c: parameter for input
 * Return: Outputs 1 if isdigit 0 if not
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}

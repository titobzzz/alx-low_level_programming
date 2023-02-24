#include <ctype.h>
#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character input
 * Return: Outputs 1 if isupper 0 if not
 */

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}

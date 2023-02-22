#include <ctype.h>
#include "main.h"

/**
 * _isalpha - checks if an input
 * @c: character is lower or not
 *
 * Return: 1 if true and 0 if false
 * Auth - ALABI TIMOTHY
 */

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}

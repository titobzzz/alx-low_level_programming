#include <stdio.h>

/**
 * _strchr - function that locates a character in a string
 *
 * @s: string pointer to char type
 * @c: char variable pointer
 *
 * Return: a pointer to the first occurrence of the character
 *
 * AUTHOR -  ALABI TIMOTHY
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);
	return ('\0');
}

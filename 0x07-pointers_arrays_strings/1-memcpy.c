#include <stdio.h>

/**
 * _memcpy - function that copies memory area
 *
 * @dest: dest pointer to char type
 * @src: string variable of char type
 * @n: unsigned int variable the number of bytes to be filled
 *
 * Return: A pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 *
 * @dest: parameter pointers destination
 * @src: parameter pointers source
 *
 * Return: Always return a char pointer.
 */

char *_strcat(char *dest, char *src)
{
	int str_len_src = 0;
	int str_len_dest = 0;
	int i, j, total_len;

	while (*(src + str_len_src) != '\0')
		str_len_src++;

	while (*(dest + str_len_dest) != '\0')
		str_len_dest++;

	j = 0;
	total_len = str_len_dest + str_len_src;

	for (i = str_len_dest; i < total_len; i++)
	{
		*(dest + i) += *(src + j);
		j++;
	}

	return (dest);
}

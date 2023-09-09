#include <stdio.h>

/**
 * _strspn - function that gets the length of a prefix substring.
 *
 * @s: string pointer to char type
 * @accept: consist only of bytes
 *
 * Return: number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, flag;

	i = 0;

	while (*(s + i) != '\0')
	{
		j = 0;
		flag = 1;

		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				flag = 0;
				break;
			}
			j++;
		}
		if (flag == 1)
			break;
		i++;
	}

	return (i);
}

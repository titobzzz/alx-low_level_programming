
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 *
 * @s1: input to string 1
 * @s2: input to string 2
 *
 * Return: NULL on faliure
 */

char *str_concat(char *s1, char *s2)
{
	int str_len_s1 = 0, str_len_s2 = 0;
	int i, j;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[str_len_s1] != '\0')
		str_len_s1++;
	while (s2[str_len_s2] != '\0')
		str_len_s2++;

	s = malloc((str_len_s1 * sizeof(char)) + ((str_len_s2 + 1) * sizeof(char)));

	if (s == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
	{
		s[i] = s2[j];
		i++;
	}

	s[i] = '\0';

	return (s);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * char create_array create array of chars
 *
 * @size: array size
 * @c:char to initalize array with
 *
 * Returns NULL if size = 0
 * Returns a pointer to the array, or NULL if it fails
 * Author - OLUMOYIN TITOBIOLUWA JOSHUA
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(char));

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(a + i) = c;

	return (a);
}

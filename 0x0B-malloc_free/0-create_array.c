#include "main.h"
#include "stdlib.h"

/**
 * create_array - creates an array of chars
 * @size: the size of the array
 * @c: the char to intiliaze with
 *
 * Return: an array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *s;

	if (size == 0)
	{
		return (NULL);
	}
	s = malloc(size * sizeof(c));
	if (s == 0)
	{
		return (NULL);
	}
	for (j = 0; j < size; j++)
	{
		s[j] = c;
	}
	return (s);
}

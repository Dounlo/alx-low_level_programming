#include "main.h"
#include "stdlib.h"
/**
 * str_concat - concatenates two strings
 * @s1: the first string to concatenate
 * @s2: the second string to concatenate
 *
 * Return: a sring or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j = 0, l, z, m;
	char *pointer;

	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	pointer = malloc((i + j + 1) * sizeof(char));
	if (pointer == NULL)
	{
		return (NULL);
	}
	for (l = 0; l <= i; l++)
	{
		pointer[l] = s1[l];
	}
	m = j;
	for (z = 0; z <= m; l++, z++)
	{
		pointer[l] = s2[z];
	}
	return (pointer);
}
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
	unsigned int i = 0, j = 0, l, z;
	char *pointer;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
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
	for (z = 0; z <= j; z++)
	{
		pointer[i++] = s2[z];
	}
	return (pointer);
}

#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string to concatenates
 * @n: number of bytes
 *
 * Return: a pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, gth1, gth2;
	char *c;

	for (i = 0; s1[i] != '\0'; i++)
	{
		gth1 = i + 1;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		gth2 = i + 1;
	}
	if (n < gth2)
	{
		c = malloc(sizeof(char) * (gth1 + n + 1));
	}
	else
	{
		c = malloc(sizeof(char) * (gth1 + gth2 + 1));
	}
	if (c == NULL)
	{
		return (NULL);
	}
	i = 0, j = 0;
	while (i < gth1)
	{
		c[i] = s1[i];
		i++;
	}
	while (n < gth2 && i < (gth1 + n))
	{
		c[i++] = s2[j++];
	}
	while (n >= gth2 && i < (gth2 + gth1))
	{
		c[i++] = s2[j++];
	}
	c[i] = '\0';
	return (c);
}

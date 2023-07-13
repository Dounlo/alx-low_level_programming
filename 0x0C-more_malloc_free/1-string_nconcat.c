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
	unsigned int i = 0, j = 0, gth1 = 0, gth2 = 0;
	char *c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1 && s1[gth1])
		gth1++;
	while (s2 && s2[gth2])
		gth2++;
	if (n < gth2)
	{
		c = malloc(sizeof(char) * (gth1 + n + 1));
	}
	else
	{
		c = malloc(sizeof(char) * (gth1 + gth2 + 1));
	}
	if (!c)
	{
		return (NULL);
	}
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

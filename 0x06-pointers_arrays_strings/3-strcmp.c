#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: the first string to compare
 * @s2: the second string to compare
 * Return: 0 if the two strings are equals
 * else a number
 */
int _strcmp(char *s1, char *s2)
{
	int i, n;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			n = s1[i] - s2[i];
		}
		else
		{
			n = 0;
		}
	}
		return (n);
}

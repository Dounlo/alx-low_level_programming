#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: the string
 * Return: the length of s
 */
int _strlen(char *s)
{
	int len, i;

	if (s[0] == '\0')
	{
		len = 0;
	}
	else
	{
	for (i = 0; s[i] != '\0'; i++)
	{
		len = i + 1;
	}
	}
	return (len);
}

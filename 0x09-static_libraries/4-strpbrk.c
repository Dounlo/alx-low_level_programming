#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to be searched
 * @accept: the char to search for
 * Return: a char or else a NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int p = 0;

	while (*s)
	{
		for (p = 0; accept[p]; p++)
		{
			if (*s == accept[p])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}

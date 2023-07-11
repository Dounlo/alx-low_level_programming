#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: a string
 * @accept: a string
 * Return: an unsigned integer
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;
	int i;

	n = 0;
	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (n);
			}
		}
		s++;
	}
	return (n);
}

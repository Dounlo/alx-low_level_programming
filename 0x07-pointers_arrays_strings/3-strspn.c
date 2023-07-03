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
	int i, j, c;

	c = 0;
	n = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				c++;
				n = c;
			}
		}
	}
	return (n);
}

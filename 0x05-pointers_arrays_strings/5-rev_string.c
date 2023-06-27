#include "main.h"
/**
 * rev_string - reverse a string
 * @s: the string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int i, j, len;
	char str = s[0];

	for (i = 0; s[i] != '\0'; i++)
	{
		len = i;
	}
	i = len;
	j = 0;
	if (s[0] == '\0')
	{}
	else
	{
	while (i > j)
	{
		str = s[j];
		s[j] = s[i];
		s[i] = str;
		j++;
		i--;
	}
	}
}

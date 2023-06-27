#include "main.h"
/**
 *
 */
void rev_string(char *s)
{
	int i, j, len;
	char *str;

	str = s;
	for (i = 0; s[i] != '\0'; i++)
	{
		len = i;
	}
	i = len;
	j = 0;
	while (i != 0 && j != len)
	{
		str[j] = s[i];
		j++;
		i--;
	}
	s = str;
}

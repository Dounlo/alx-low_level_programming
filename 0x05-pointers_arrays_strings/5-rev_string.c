#include "main.h"
/**
 *
 */
void rev_string(char *s)
{
	int i, j, len;

	for (i = 0; s[i] != '\0'; i++)
	{
		len = i;
	}
	i = len;
	j = 0;
	while (i >= j)
	{
		s[j] = s[i];
		s[i] = s[j];
		j++;
		i--;
	}
}

#include "main.h"
/**
 *
 */
void rev_string(char *s)
{
	char *str;
	int i, len, j;

	str = "";
	for (i = 0; s[i] != '\0'; i++)
	{
		len = i;
	}
	for (i = len; i >= 0; i--)
	{
		for (j = 0; j <= len; j++)
		{
			if (i == j)
				{
					str[j] = s[i];
				}
			else
			{}
		}
	}
}

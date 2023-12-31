#include "main.h"
#include "stdlib.h"
/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: a string
 *
 * Return: a pointer or NULL if str = NULL
 */
char *_strdup(char *str)
{
	unsigned int k, n;
	char *pointer;

	if (str == NULL)
	{
		return (NULL);
	}
	n = 0;
	while (str[n])
	{
		n++;
	}
	pointer = (char *)malloc(sizeof(char) * (n + 1));
	if (pointer == NULL)
	{
		return (NULL);
	}
	for (k = 0; k <= n; k++)
	{
		pointer[k] = str[k];
	}
	return (pointer);
}

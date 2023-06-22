#include "main.h"
/**
 * _isupper - checks if a char is uppercase
 * @c: the char the function tries to check
 * Return: 1 if the char is uppercase otherwise 0
 */
int _isupper(int c)
{
	int a;

	if (c == 'A' && c <= 'Z')
	{
		a = 1;
	}
	else
	{
		a = 0;
	}
	return (a);
}

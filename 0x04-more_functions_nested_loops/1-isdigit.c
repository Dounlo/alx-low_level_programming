#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: the variable to check
 * Return: 1 if c is a digit otherwise 0
 */
int _isdigit(int c)
{
	int a;

	if (c >= '0' && c <= '9')
	{
		a = 1;
	}
	else
	{
		a = 0;
	}
	return (a);
}

#include "main.h"
/**
 * _isalpha -checks for alphabetic character
 *
 * @c: is the number to be checked
 *
 * Return: 1 if c is a letter, lowercase or uppercase and 0 otherwise
 */

int _isalpha(int c)
{
	int a;

	if (c >= 'a' && c <= 'z')
	{
		a = 1;
	}
	else if (c >= 'A' && c <= 'Z')
	{
		a = 1;
	}
	else
	{
		a = 0;
	}
	return (a);
}

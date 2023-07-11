#include "main.h"
/**
 * _islower -Check if a char is lowercase
 * @c : is the char that we want to check
 *
 * Return:  1 if the char is lowercase else return 0
 *
 */

int _islower(int c)
{
	int a;

	if (c >= 'a' && c <= 'z')
	{
		a = 1;
	}
	else
	{
		a = 0;
	}
	return (a);
}

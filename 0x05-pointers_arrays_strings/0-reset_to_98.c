#include "main.h"
/**
 * reset_to_98 - Changes the value of an integer
 * @n: the integer to be changed
 * Return: void
 */
void reset_to_98(int *n)
{
	int *p;

	p = &*n;
	*p = 98;
}

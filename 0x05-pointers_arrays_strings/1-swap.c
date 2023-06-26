#include "main.h"
/**
 * swap_int - Swaps two inetegers
 * @a: the first integer to be swaped
 * @b: the second integr to be swaped
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;
	int *p, *q;

	p = &*a;
	q = &*b;

	c = *q;
	*q = *p;
	*p = c;
}

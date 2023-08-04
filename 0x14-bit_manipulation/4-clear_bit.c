#include "main.h"
/**
 * clear_bit - clears a bit at an index
 * @n: the integer pointer
 * @index: the index
 *
 * Return: 1 success else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int b;

	if (index > 63)
		return (-1);
	b = ~(1 << index);
	*n = *n & b;
	return (1);
}

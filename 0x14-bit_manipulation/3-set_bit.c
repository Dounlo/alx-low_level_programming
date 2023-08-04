#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the integer pointer
 * @index: the index
 *
 * Return: 1 Success else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1 >> index) | *n);
	return (1);
}

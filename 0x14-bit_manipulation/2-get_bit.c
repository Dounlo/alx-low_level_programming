#include "main.h"
/**
 * get_bit - gets a bit at an index
 * @n: the integer
 * @index: the index
 *
 * Return: the bit or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}

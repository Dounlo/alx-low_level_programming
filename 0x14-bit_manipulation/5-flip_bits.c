#include "main.h"
/**
 * flip_bits - counts number of bites to flip to get from one number to another
 * @n: the first integer
 * @m: the seconde integer
 *
 * Return: the number of bites
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int b, s = 0;

	for (b = 63; b >= 0; b--)
	{
		if (((n ^ m) >> b) & 1)
			s++;
	}
	return (s);
}

#include "main.h"
/**
 * get_endianness - checks the endianness
 *
 * Return: 0 for big else 1
 */
int get_endianness(void)
{
	unsigned int i;
	char *endian;

	i = 1;
	endian = (char *)&i;
	return (*endian);
}

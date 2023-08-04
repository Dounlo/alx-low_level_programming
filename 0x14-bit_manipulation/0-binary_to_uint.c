#include "main.h"
/**
 * binary_to_uint - converts binary number to integer
 * @b: the binary number
 *
 * Return: the integer converted
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, integ;

	integ = 0;
	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		integ = integ * 2 + (b[i] - '0');
	}
	return (integ);
}

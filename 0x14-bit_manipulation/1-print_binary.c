#include "main.h"
/**
 * print_binary - converts integer to binary
 * @n: the integer
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, s = 0;

	for (i = 63; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			_putchar('1');
			s++;
		}
		else if (s)
			_putchar('0');
	}
	if (!s)
		_putchar('0');
}

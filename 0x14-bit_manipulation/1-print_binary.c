#include "main.h"
/**
 * print_binary - converts integer to binary
 * @n: the integer
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i;

	for (i = 63; i >= 0; i--)
	{
		if (n & (1 << i))
			_putchar('1');
		else
			_putchar('0');
	}
	_putchar('\n');
}

#include "main.h"
/**
 * print_last_digit -Returns the value of the last digit
 * @n: the integer to prints its last digit
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	int d, c;

	if (n >= 0)
	{
		d = n % 10;
		_putchar('0' + d);
	}
	else
	{
		c = -n;
		d = c % 10;
		_putchar('0' + d);
	}
	return (d);
}

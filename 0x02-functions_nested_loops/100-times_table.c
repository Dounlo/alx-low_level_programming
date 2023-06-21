#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the number of the table
 * Return: void
 */
void print_times_table(int n)
{
	int x, y, o;

	if (n >= 0 && n <= 15)
	{
	for (x = 0; x <= n; x++)
	{
	for (y = 0; y <= n; y++)
	{
		o = x * y;
		if (y == 0)
		{
			_putchar(o + '0');
		}
		if (o < 10 && y != 0)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			_putchar(o + '0');
		}
		else if (o >= 10 && o < 100)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar((o / 10) + '0');
			_putchar((o % 10) + '0');
		}
		else if (o >= 100)
		{
			_putchar(',');
			_putchar(' ');
			_putchar((o / 100) + '0');
			_putchar(((o / 10) % 10) + '0');
			_putchar((o % 10) + '0');
		}
	}
			_putchar('\n');
	}
	}
}

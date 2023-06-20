#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 * Return: void
 */
void times_table(void)
{
	int x, y, o;
	for (x = 0; x < 10; x++)
	{
	for (y = 0; y < 10; y++)
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
			_putchar(o + '0');
		}
		else if (o >= 10)
		{
			_putchar(',');
			_putchar(' ');
			_putchar((o / 10) + '0');
			_putchar((o % 10) + '0');
		}
	}
	_putchar('\n');
	}
}

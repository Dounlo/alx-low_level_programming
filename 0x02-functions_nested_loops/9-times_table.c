#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 * Return: void
 */
void times_table(void)
{
	int i, j, o;

	for (j = 0; j < 10; j++)
	{
	for (i = 0; i < 10; i++)
	{
		o = j * i;
		if (o <= 9 && i < 9)
		{
		_putchar('0' + o);
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		}
		else if (o <= 9 && i == 9)
		{
		_putchar('0' + o);
		_putchar('\n');
		}
		else if (o > 9 && i < 9)
		{
		_putchar('0' + (o / 10));
		_putchar('0' + (o % 10));
		_putchar(',');
		_putchar(' ');
		}
		else if (o > 9 && i == 9)
		{
		_putchar('0' + (o / 10));
		_putchar('0' + (o % 10));
		_putchar('\n');
		}
	}
	}
}

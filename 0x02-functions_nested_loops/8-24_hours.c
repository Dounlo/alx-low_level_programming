#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return void
 */
void jack_bauer(void)
{
	int i, j, k, l;

	for (k = 0; k < 2; k++)
	for (l = 0; l < 10; l++)
	for (i = 0; i < 6; i++)
	for (j = 0; j < 10; j++)
	{
	_putchar('0' + k);
	_putchar('0' + l);
	_putchar(':');
	_putchar('0' + i);
	_putchar('0' + j);
	_putchar('\n');
	}
	k = 2;
	for (l = 0; l < 4; l++)
	for (i = 0; i < 6; i++)
	for (j = 0; j < 10; j++)
	{
	_putchar('0' + k);
	_putchar('0' + l);
	_putchar(':');
	_putchar('0' + i);
	_putchar('0' + j);
	_putchar('\n');
	}
}

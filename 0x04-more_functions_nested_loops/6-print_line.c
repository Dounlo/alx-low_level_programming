#include "main.h"
/**
 * print_line - prints lines
 * @n: the number of times to print a line
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{}
	else
	{
	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	}
	_putchar('\n');
}

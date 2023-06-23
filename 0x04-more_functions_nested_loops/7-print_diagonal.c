#include "main.h"
/**
 * print_diagonal - prints diagonales
 * @n: the number of times to print diagonal
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (i = 1; i <= n; i++)
	{
		for (j = 0; j <= i; j++)
		{
		_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
	}
}

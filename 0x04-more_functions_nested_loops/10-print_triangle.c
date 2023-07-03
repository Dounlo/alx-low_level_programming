#include "main.h"
/**
 *
 */
void print_triangle(int size)
{
	int i, j, k;

	for (i= 1; i <= size; i ++)
	{
		for (j = 1; j <= i; j++)
		{
			_putchar(' ');
		}
		for (k = i + 1; k <= size; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

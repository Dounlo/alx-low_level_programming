#include "main.h"
/**
 * print_square -prints sequare using #
 * @size: the size of the sequare
 * Return: void
 */
void print_square(int size)
{
	int s, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (s = 1; s <= size; s++)
	{
		for (z = 1; z <= size; z++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	}
}

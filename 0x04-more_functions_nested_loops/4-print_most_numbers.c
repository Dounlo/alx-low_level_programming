#include "main.h"
/**
 * print_most_numbers - prints numbers
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{}
		else
		{
			_putchar('0' + i);
		}
	}
		_putchar('\n');
}

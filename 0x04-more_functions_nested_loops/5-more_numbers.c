#include "main.h"
/**
 * more_numbers - prints numbres from 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	int i, j, a, b;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 0 && j <= 9)
			{
				a = (j * 10) / 10;
			}
			else if (j >= 10 && j <= 14)
			{
				a = j / 10;
			}
			_putchar(a + '0');
			b = j % 10;
			if (j >= 10 && j <= 14)
			{
				_putchar(b + '0');
			}
		}
		_putchar('\n');
	}
}

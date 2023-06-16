#include <stdio.h>
/**
 * main -Edit point
 *
 * This a program that prints hexadecimal
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int g, j;

	for (g = 0; g < 10; g++)
	{putchar('0' + g);
	}
	for (j = 0; j < 6; j++)
	{putchar('a' + j);
	}
	putchar('\n');
	return (0);
}

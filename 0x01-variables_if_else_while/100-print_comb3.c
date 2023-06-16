#include <stdio.h>
/**
 * main -Edit point
 *
 * This a program t
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	for (j = i + 1; j < 10; j++)
	{
		putchar('0' + i);
		putchar('0' + j);
		putchar(',');
		putchar(' ');
	}
	return (0);
}


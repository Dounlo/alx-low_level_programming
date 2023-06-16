#include <stdio.h>

/**
 * main -Edit point
 *
 * This a program that prints all possible combination of single digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		putchar('0' + i);
		putchar(',');
		putchar(' ');
	}
	putchar('9');
	return (0);
}

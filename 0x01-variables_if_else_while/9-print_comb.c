#include <stdio.h>

/**
 * main -Edit point
 *
 * This a program that prints all possible combination of single digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
		j = i;
		if (j < 9)
		{
		putchar(44);
		putchar(32);
		}
	}
	putchar('\n');
	return (0);
}

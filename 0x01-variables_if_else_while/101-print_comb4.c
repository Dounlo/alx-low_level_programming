#include <stdio.h>
/**
 * main -Edit point
 *
 * This a program t
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, o;

	for (i = 0; i < 8; i++)
	for (j = i + 1; j < 9;  j++)
	for (o = j + 1; o < 10; o++)
	{
		putchar('0' + i);
		putchar('0' + j);
		putchar('0' + o);
		if (i + j + o < 24)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}


#include <stdio.h>
/**
 * main -Edit point
 *
 * This a program that prints ensemble of four digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 10; i++)
	for (j = 0; j < 10; j++)
	for (k = 0; k < 10; k++)
	for (l = 0; l < 10; l++)
	{
		if ((i * 10 + j) == (k * 10 + l))
		{
		}
		else if ((i * 10 + j) == (l * 10 + k))
		{
		}
		else if (((i * 10 + j) > 98))
		{
		}
		else
		{
			putchar('0' + i);
			putchar('0' + j);
			putchar(' ');
			putchar('0' + k);
			putchar('0' + l);
			putchar(',');
			putchar(' ');
		}
		if (((i * 10 + j) == 98) && ((k * 10 + l) == 99))
		{
			putchar('\n');
		}
	}
	return (0);
}

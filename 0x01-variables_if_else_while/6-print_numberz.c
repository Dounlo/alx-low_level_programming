#include <stdio.h>
/**
 * main -Edit point
 *
 * This a program that prints
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	a = 0;

	for (a = 0; a < 10; a++)
	{
		putchar('0' + a);
	}
	putchar('\n');
	return (0);
}

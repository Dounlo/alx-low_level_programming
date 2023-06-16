#include <stdio.h>

/**
 * main -Edit point
 *
 * This a program that prints reverse alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int g;

	for (g = 0; g < 26; g++)
	{putchar('z' - g);
	}
	putchar('\n');
	return (0);
}

#include "main.h"
#include <stdio.h>
/**
 * print_array - prints arrays
 * @a: the array
 * @n: the lenght of the array
 * Return: void
 */
void print_array(int *a, int n)
{
	int i, m;

	if (n != 1)
	{
	m = n - 1;
	for (i = 0; i < m; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d\n", a[m]);
	}
	else
	{
		printf("%d\n", a[n]);
	}
}

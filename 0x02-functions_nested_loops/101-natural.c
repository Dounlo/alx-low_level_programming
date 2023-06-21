#include <stdio.h>
/**
 * main - Edit point
 * This program computes and prints all natural numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int k, sm;

	sm = 0;
	for (k = 0; k < 1024; k++)
	{
		if (k % 3 == 0 || k % 5 == 0)
		{
			sm = sm + k;
		}
	}
	printf("%d\n", sm);
	return (0);
}

#include "stdio.h"
#include "main.h"
#include "stdlib.h"
/**
 * main - adds unsigned numbers
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (arc < 1)
	{
		printf("0\n");
	}
	for (i = 0; i < argc; i++)
	{
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

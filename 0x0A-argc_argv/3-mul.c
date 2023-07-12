#include "main.h"
#include "stdio.h"
#include "stdlib.h"
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0 success or 1 error
 */
int main(int argc, char *argv[])
{
	int mu = 1;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	mu = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mu);
	return (0);
}

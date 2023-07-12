#include "main.h"
#include "stdio.h"
#include "stdlib.h"
/**
 *
 */
int main(int argc, char *argv[])
{
	int mu = 1;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	mu = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mu);
	return (0);
}

/**
 * main - Entry point
 *
 * This is my code for printinf the sizeof all variables
 *
 * Return: Always 0 (success)
 */

#include <stdio.h>

int main(void)
{
	char op;
	int b;
	long g;
	long long l;
	float f;

	printf("Size of a char: %zu byte(s)\n", sizeof(op));
	printf("Size of an int: %zu byte(s)\n", sizeof(b));
	printf("Size of a long int: %zu byte(s)\n", sizeof(g));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(l));
	printf("Size of a float: %zu byte(s)\n", sizeof(f));

	return (0);
}

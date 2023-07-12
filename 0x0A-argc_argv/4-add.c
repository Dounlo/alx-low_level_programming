#include "stdio.h"
#include "main.h"
#include "stdlib.h"
#include <ctype.h>
#include "string.h"
/**
 * check_dig - checks a char is a digit
 * @s: the sring to check
 *
 * Return: 1 if success else 0
 */
int check_dig(char *s)
{
	int i, n;

	for (i = 0 ; s[i] != '\0'; i++)
	{
		if (isdigit(s[i]) == 0)
		{
			n = 0;
			break;
		}
		else
		{
			n = 1;
		}
	}
	return (n);
}
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

	if (argc < 1)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		if (check_dig(argv[i]) == 1)
		{
			sum = sum + atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (0);
		}
	}
	printf("%d\n", sum);
	return (0);
}

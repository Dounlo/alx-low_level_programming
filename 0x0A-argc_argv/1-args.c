#include "stdio.h"
#include "main.h"
/**
 * main - prints the number of arguments passed into it
 * @argc: the number of command arguments
 * @argv: an array of command arrguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}

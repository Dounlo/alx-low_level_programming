#include "main.h"
#include "stdio.h"
/**
 * main - prints the name of a program
 * @argc: number of command narguments
 * @argv: an array of argc
 *
 * Return: Alwyas 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}

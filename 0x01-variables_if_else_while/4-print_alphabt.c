#include <stdio.h>
/**
 * main -Edit point
 *
 * This a program to write alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *l;
	char nl;

	l = "abcdfghijklmnoprstuvwxyz";
	nl = '\n';
	while (*l)
	{
		putchar(*l++);
	}
	putchar(nl);
	return (0);
}

#include <stdio.h>
/**
 * main -Edit point
 *
 * This a program to detect negative and positive number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *l;
	char nl;

	l = "abcdefghijklmnopqrstuvwxyz";
	nl = '\n';
	while (*l)
	{
		putchar(*l++);
	}
	putchar(nl);
	return (0);
}

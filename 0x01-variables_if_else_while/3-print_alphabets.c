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
	char *l, *L;
	char nl;

	l = "abcdefghijklmnopqrstuvwxyz";
	L = "ABCDEFGHIJKLMNOPQRSTUVWXYZ$";
	nl = '\n';
	while (*l)
	{
		putchar(*l++);
	}
	while (*L)
	{
		putchar(*L++);
	}
	putchar(nl);
	return (0);
}

#include <stdio.h>
/**
 * main -Write  write a quote
 *
 * This is my script to write a quote with no printf nor puts
 *
 * Return: Always 1 (Success)
 */

int main(void)
{
	char *b, *c;
	char d;

	b = "and that piece of art is useful";
	c = "Dora Korpar";
	d = '\n';
	while (*b)
	{ putchar(*b++);
	}
	putchar('"');
	putchar(' ');
	putchar('-');
	putchar(' ');
	while (*c)
{		putchar(*c++);
}
	putchar(',');
	putchar(' ');
	putchar('2');
	putchar('0');
	putchar('1');
	putchar('5');
	putchar('-');
	putchar('1');
	putchar('0');
	putchar('-');
	putchar('1');
	putchar('9');
	putchar(d);

	return (1);
}

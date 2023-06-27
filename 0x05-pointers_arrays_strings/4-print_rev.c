#include "main.h"
/**
 * print_rev - prints a string backround
 * @s: the string to prints
 * Return: void
 */
void print_rev(char *s)
{
	int i, len;

	for (i = 0; s[i] != '\0'; i++)
	{
		len = i + 1;
	}
	if (s[0] == '\0')
	{
		_putchar('\n');
	}
	else
	{
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
	}
}

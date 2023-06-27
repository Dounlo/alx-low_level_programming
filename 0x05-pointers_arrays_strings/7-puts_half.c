#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: the string to be printed
 * Return: void
 */
void puts_half(char *str)
{
	int i, len, half;

	for (i = 0; str[i] != '\0'; i++)
	{
		len = i + 1;
	}
	if (len % 2 == 1)
	{
	half = (len - 1) / 2;
	}
	else
	{
		half = len / 2;
	}
	for (i = half; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

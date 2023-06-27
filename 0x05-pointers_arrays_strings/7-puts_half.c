#include "main.h"
/**
 *
 */
void puts_half(char *str)
{
	int i, len, half;

	for (i = 0; str[i] != '\0'; i++)
	{
		len = i + 1;
	}
	half = len / 2;
	for (i = half; i <= len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

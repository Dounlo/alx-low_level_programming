#include "stdarg.h"
#include "variadic_functions.h"
#include "stdio.h"
/**
 * print_strings - prints strings
 * @separator: a string printed between numbers
 * @n: numbers of integers passed to function
 * @...: the strings to be printed
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *c;
	unsigned int i;
	va_list m;

	va_start(m, n);
	for (i = 0; i < n; i++)
	{
		c = va_arg(m, char*);
		if (c == NULL)
			printf("(nil)");
		else
			printf("%s", c);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(m);
}

#include "variadic_functions.h"
#include "stdio.h"
#include "stdarg.h"

/**
 * print_numbers - prints numbers
 * @separator: a string printed between numbers
 * @n: numbers of integers passed to function
 * @...: the integers to be printed
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list m;

	va_start(m, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(m, int));
		if (i != (n-1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(m);
}



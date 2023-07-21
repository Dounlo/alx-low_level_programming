#include "variadic_functions.h"
#include "stdio.h"
#include "stdarg.h"
/**
 * print_all - prints anything
 * @format: format of all arguments passed fo function
 * @...: the arguments to print
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	char *s, *c = "";
	int i = 0;
	va_list m;

	va_start(m, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", c, va_arg(m, int));
					break;
				case 'i':
					printf("%s%d", c, va_arg(m, int));
					break;
				case 'f':
					printf("%s%f", c, va_arg(m, double));
					break;
				case 's':
					s = va_arg(m, char *);
					if (s == NULL)
						s = "(nil)";
					printf("%s%s", c, s);
					break;
				default:
					i++;
					continue;
			}
			c = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(m);
}

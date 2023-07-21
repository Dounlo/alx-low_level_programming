#include "function_pointers.h"
#include "stdlib.h"
/**
 * print_name - prints name
 * @name: name to prints
 * @f: a pointer
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}

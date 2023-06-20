#include "main.h"

/**
 *  print_alphabet_x10  - Entry point
 *
 * No return
 */
void print_alphabet_x10(void)
{
	char s;
	int t;

	for (t = 0; t < 10; t++)
	{
	for (s = 'a'; s <= 'z'; s++)
	{
		_putchar(s);
	}
	_putchar('\n');
	}
}

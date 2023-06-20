#include "main.h"

/**
 *  print_alphabet - Entry point
 *
 * No return
 */
void print_alphabet(void)
{
	char s;

	for (s = 'a'; s <= 'z'; s++)
	{
		_putchar(s);
	}
	_putchar('\n');
}

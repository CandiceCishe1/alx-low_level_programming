#include "main.h"
/**
 * print_alphabet_x10 -  prints 10 times the
 * alphabet, in lowercase, followed by a new line.
 */
void print_alphabet_x10(void)
{
	int n;

	for (n = 0; n <= 10; n++)
		char l;

		for (l = 'a'; l <= 'z'; l++)
			_putchar(l);

		_putchar('\n');
}

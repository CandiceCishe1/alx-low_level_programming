#include "main.h"
/**
 * print_line - function that draws a straight line in the terminal
 * @n:  is the number of times the character _ should be printed
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');

		if (n <= 0)
			_putchar('\n');
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_square - check the code
 * @size: value to be computed
 * Return: Always 0.
 */
void print_square(int size)
{
	int i;

	if (size <= 0)
		_putchar('\n');


	for (i = 0; i <= size; i++)
		_putchar(35);
	_putchar('\n');
}

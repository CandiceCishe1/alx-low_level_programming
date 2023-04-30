#include "main.h"

/**
 * print_square - check the code
 * @size: value to be computed
 * Return: Always 0.
 */
void print_square(int size)
{
	int n;
	int i;

	if (size <= 0)
	{
		_putchar('\n');
	}


	for (n = 1; n <= size; n++)
	{
		for (i = 1; i <= size; i++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}

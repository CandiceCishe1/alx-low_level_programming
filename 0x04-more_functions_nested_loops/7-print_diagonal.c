#include "main.h"

/**
 * print_diagonal - check the code
 * @n: the value to be computed
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i;
	int z;

	for (z = 0; z <= n; z++)
	{
		for (i = 0; i <= z; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}

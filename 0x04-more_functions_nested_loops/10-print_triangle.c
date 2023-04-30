#include "main.h"

/**
 * print_triangle - check the code
 * @size: the value to be computed
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int spaces;
	int i;
	int row;
	int y = 35;

	for (row = 1; row <= size; row++)
	{
		for (spaces = size - row; spaces >= 1; spaces--)
		{
			_putchar(' ');
		}
		for (i = 1; i <= row; i++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}

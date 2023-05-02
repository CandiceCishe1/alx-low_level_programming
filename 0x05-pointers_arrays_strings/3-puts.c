#include "main.h"
/**
 * _puts - function that prints a string, followed by a new line, to stdout.
 * @str: string to be printed
 * Return: always 0
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

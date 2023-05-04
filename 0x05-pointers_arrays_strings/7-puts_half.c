#include "main.h"
/**
 * puts_half - function that prints half of a string
 * followed by a new line.
 * @str: The string to be printed.
 * Return: always 0
 */
void puts_half(char *str)
{
	int len, i, n;

	len = 0;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
			_putchar(str[i]);

	}
	else
	{
		for (n = (len - 1) / 2; str[n] != '\0'; n++)
			_putchar(str[n + 1]);
	}
	_putchar('\n');
}

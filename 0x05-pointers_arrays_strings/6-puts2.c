#include "main.h"
/**
 * puts2 -  function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: thestrings of a character
 * Return: always 0
 */
void puts2(char *str)
{
	int count = 0, i = 0;
	char last_char;

	while (*s)
	{
		s++;
		count++;
	}
	while (i < count)
	{
		s--;
		i++;
	}
	for (i = 0; i < count; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}

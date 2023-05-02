#include "main.h"
/**
 * rev_string -  function that reverses a string.
 * @s: string to be reversed.
 * Return: always 0.
 */
void rev_string(char *s)
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
	for (i = 0; i < (count / 2); i++)
	{
		int last_digit = count - 1;

		last_char = s[last_digit - i]; /**
						* From here downwards
						* we are swappimg the
						* first and last integer
						*/
		s[last_digit - i] = s[i];
		s[i] = last_char;
	}
}

#include "main.h"
 /**
  * main - prototype void print_alphabet(void)
  * Return: always 0
  * description function that prints the alphabet, in lowercase
  */
void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		_putchar(l);
	}
	_putchar('\n');
}

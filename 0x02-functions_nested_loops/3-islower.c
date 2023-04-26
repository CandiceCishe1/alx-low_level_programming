#include "main.h"
/**
 * _islower - check uppercase and lowercase alphabets
 * Return: 1 if is lowercase, 0 otherwise
 * @c: The character to be checked
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

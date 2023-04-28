#include "main.h"
#include <stdio.h>
/**
 * _isupper - Checks for uppercase
 * @c: Characterto be checked
 * Return: 1 is c is uppercase and 0 otherwise
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}

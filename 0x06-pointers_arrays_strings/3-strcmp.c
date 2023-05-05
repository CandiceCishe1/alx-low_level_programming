#include "main.h"
/**
 *  _strcmp - Description
 *  @s1: First character
 *  @s2: Second Character
 *  Return: 0 if both equal and 1 otherwise
 * Description - This function is used to compare the string arguments.
 * It compares strings lexicographically which means it compares both
 * the strings character by character. It starts comparing the very first
 * character of strings until the characters of both strings are
 * equal or NULL character is found.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, op = 0;

	while (op == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		op = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (op);
}


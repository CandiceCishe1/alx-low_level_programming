#include "main.h"
/**
 * _strpbrk - finds the first character in the string s that matches
 *  any character specified in accept.
 * @s: the character will be taken from this string
 * @accept: The character to be searched for in s
 * Return: This returns a pointer to the first occurrence of
 * the character c in the string s, or NULL if the character is not found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, k;

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (k = 0; accept[k]; k++)
		{
			if (s[i] == accept[k])
			{
				return (&s[i]);
			}
		}
	}
	return ('\0');
}

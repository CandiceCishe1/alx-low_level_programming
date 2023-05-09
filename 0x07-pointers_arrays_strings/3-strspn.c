#include "main.h"
/**
 * _strspn - function returns the length of the initial substring of
 * the string pointed to by s that is made up of only those character
 * contained in the string pointed to by accept
 * @s: string to be scanned
 * @accept: string containing the characters to match.
 * Return: The number of characters in the initial segment of s
 * which consist only of characters from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int j;
	unsigned int z = 0;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				z++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (z);
		}
		s++;
	}
	return (z);


}

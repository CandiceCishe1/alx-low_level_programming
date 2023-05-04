#include "main.h"
/**
 * _strncat -  function that concatenates two strings.
 * @dest: First char (name)
 * @src: Second char (name)
 * @n: amount of bytes used from src
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
		i++;
	while (j < n)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
		{
			break;
		}
		i++;
		j++;
	}
	return (dest);
}

#include "main.h"
/**
 * _strncpy -  function that copies a string.
 * @dest: First char (name)
 * @src: Second char (name)
 * @n: amount of bytes used from src
 * Return: always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	/**
	 * for ( ; i < n; i++)
	 * {
	 * dest[i] != '\0';
	 * }
	 */
	return (dest);
}

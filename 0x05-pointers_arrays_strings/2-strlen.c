#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: the string whose length is to be counted.
 * Return:the count
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0') /**
				  * every string terminates with no
				  * character or at zero
				  */
		count++;
	return (count);
}

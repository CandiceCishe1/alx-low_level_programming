#include <stdio.h>
/**
 * main - Entry Point
 * Return: always 0
 * Description  prints the lowercase alphabet in reverse
 */
int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
		putchar(l);
	putchar('\n');
	return (0);
}

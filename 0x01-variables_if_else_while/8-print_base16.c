#include <stdio.h>
/**
 * main - Entry Point
 * Return: always 0
 * Description  prints all the numbers of base 16 in lowercase
 */
int main(void)
{
	int n = 48;
	int l = 97;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	while (l <= 102)
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}

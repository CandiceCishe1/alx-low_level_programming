#include <stdio.h>
/**
 * main - Entry Point
 * Return: always 0
 * Description prints all possible combinations of single-digit numbers.
 */
int main(void)
{
	int comma = 44;
	int n = 48;
	int space = 32;

	while (n <= 57)
	{
		putchar(n);
		if (n == 57)
		{
			break;
		}
		putchar(comma);
		putchar(space);
		n++;
	}
	putchar('\n');
	return (0);
}

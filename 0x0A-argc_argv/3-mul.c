#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - with argc and argc as arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int a;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
	}

	else
	{
		for (a = 1; a < 3; a++)
			i *= atoi(argv[a]);

		printf("%d\n", i);
	}
	return (0);
}

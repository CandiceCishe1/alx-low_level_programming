#include "main.h"
#include <stdio.h>
/**
 * print_array -  function that prints n elements of an array of integer.
 * @n: the n elements to be printed
 * @a: The array.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		if (i == 0)
			printf("%d", a[i]);

		else
		{
			printf(",%d", a[i]);
		}
	printf("\n");
}

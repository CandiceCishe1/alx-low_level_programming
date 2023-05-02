#include "main.h"
/**
 * swap_int - function that swaps the values of two integers.
 * @a: First number
 * @b: Second number
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int temp = *a; /* Create a temporary storage for pointer *a */

	*a = *b;
	*b = temp; /*Stored temp (*a) into *b */
}

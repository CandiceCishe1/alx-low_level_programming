#include "main.h"

/**
 *  sqrt_partA - function that finds the sqrt of b
 *  @a: the square root of b.
 *  @b: The number we are looking for its sqrt
 *  Return: a if sqrt is found, -1 if sqrt doesnt exist
 *  and iterates if a*a < b.
 */
int sqrt_partA(int a, int b)
{
	if (a * a == b)
	{
		return (a);
	}
	else if (a * a > b)
	{
		return (-1);
	}
	return (sqrt_partA((a + 1), b));
}

/**
 *  _sqrt_recursion - function that returns the natural
 *  square root of a number
 *  @n: the nuber we are gonna return its square root.
 *  Return: the natural square root of a number.
 */

int _sqrt_recursion(int n)
{
	return (sqrt_partA(1, n));

}

#include "main.h"

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 *
 * @n: The number to find the square root of.
 *
 * Return: The square root of the number, -1 if no natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	else if (n == (int)sq_root(n) * (int)sq_root(n))
	{
		return (sqrt(n));
	}
	else
	{
		return (-1);
	}
}


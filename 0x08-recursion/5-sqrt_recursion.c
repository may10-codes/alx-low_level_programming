#include "main.h"

/**
 * sqrt_recursion - calculates the natural square root of a number
 * @n: the number to calculate the square root of
 * @root: the current guess for the square root of n
 *
 * Return: the natural square root of n, otherwise -1 if n does not have a
 *         natural square root
 */
int sqrt_recursion(int n, int root)
{
	if (root * root == n)
		return (root);
	if (root * root > n)
		return (-1);
	return (sqrt_recursion(n, root + 1));
}

/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: the number to calculate the square root of
 *
 * Return: the natural square root of n, otherwise -1 if n does not have a
 *         natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sqrt_recursion(n, 1));
}

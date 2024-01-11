#include "main.h"
/**
 * _sqrt_recursion - Function that returns the natural square root of a number
 * @n: number to find its square root
 * Return: natural square root of n
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
    {
        return (-1);
    }
    return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - helper function to find actual root
 * @n: number to find its square root
 * @m: integer to iterate through n
 * Return: actuall natural square root of n
 */
int actual_sqrt_recursion(int n, int m)
{
    if (m * m > n)
    {
        return (-1);
    }
    if (m * m == n)
    {
        return (m);
    }
    return (actual_sqrt_recursion(n, m + 1));
}


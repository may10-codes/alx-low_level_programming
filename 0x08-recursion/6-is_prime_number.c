#include "main.h"

/**
 * is_divisible - checks if a number is divisible by any number
 * @n: the number to check
 * @divisor: the divisor to check if n is divisible by
 *
 * Return: 1 if n is divisible by divisor, otherwise return 0
 */
int is_divisible(int n, int divisor)
{
	if (n % divisor == 0)
		return (1);
	if (divisor >= n / 2)
		return (0);
	return (is_divisible(n, divisor + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if n is prime, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	return (is_divisible(n, 2) == 0);
}

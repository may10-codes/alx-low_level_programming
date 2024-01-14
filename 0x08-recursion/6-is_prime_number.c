#include "main.h"
/**
 * is_prime_number - function that returns 1 if integer is prime, otherwise 0
 * @n: input integer to check if prime
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - helper function to recursively check if prime
 * @n: input integer to check if prime
 * @m: variable to help iterate through n
 * Return: 1 if n is prime, 0 otherwise
 */
int actual_prime(int n, int m)
{
	if (m == 1)
	{
		return (1);
	}
	if (n % m == 0 && m > 0)
	{
		return (0);
	}
	return (actual_prime(n, m - 1));
}


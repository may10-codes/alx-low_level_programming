#include "main.h"

/**
 * print_binary - Print binary
 * @n: The number to print
 *
 * Return: No return
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}


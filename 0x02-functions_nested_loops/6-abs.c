#include "main.h"

/**
 * _abs - computes absolute value of an integer
 *  integer to be passed
 *
 * Return: function return 0
 */
int _abs(int n)
{
	if (n > 0)
	{
		n = n * 1;
	}
	else if (n == 0)
	{
		n = 0;
	}
	else if (n < 0)
	{
		n = n * -1;
	}
	return (n);
}

#include "main.h"

#include <stdio.h>

/**
 * is_palindrome - function that checks if a string is a palindrome
 * @s: input string to check
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len <= 1)
	{
		return (1);
	}
	else if (*s == *(s + len - 1))
	{
		*(s + len - 1) = '\0';
		return (is_palindrome(s + 1));
	}
	else
	{
		return (0);
	}
}
i

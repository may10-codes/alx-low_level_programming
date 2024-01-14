#include <string.h>
#include "main.h"

/**
 * is_palindrome - function that checks if a string is a palindrome
 * @s: input string to check
 * @start: starting index of the current substring
 * @end: ending index of the current substring
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome_recursive(char *s, int start, int end)
{
    if (start >= end)
    {
        return 1;
    }
    else if (s[start] == s[end])
    {
        return is_palindrome_recursive(s, start + 1, end - 1);
    }
    else
    {
        return 0;
    }
}

int is_palindrome(char *s)
{
    int len = strlen(s);

    return is_palindrome_recursive(s, 0, len - 1);
}


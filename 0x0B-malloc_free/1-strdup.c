#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - Function to duplicate given string
 * @str: string character to duplicate
 * Return: pointer to duplicate string if success, null otherwise
 */
char *_strdup(char *str)
{
	char *dup;
	int r, stringlength;

	r = 0;
	stringlength = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[stringlength])
	{
		stringlength++;
	}
	dup = malloc(sizeof(char) * (stringlength + 1));

	if (dup == NULL)
	{
		return (NULL);
	}
	while ((dup[r] = str[r]) != '\0')
	{
		r++;
	}
	return (dup);
}

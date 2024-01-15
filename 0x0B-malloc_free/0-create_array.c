#include"main.h"
#include<stdlib.h>
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

char *create_array(unsigned int size, char c)
{
    char *str = malloc(size);

    if (size == 0 || str == 0)
    {
        return (NULL);
    }
    while (size--)
    {
        str[size] = c;
    }
    return (str);
}


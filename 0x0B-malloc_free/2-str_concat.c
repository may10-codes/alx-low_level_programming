#include"main.h"
#include<stdlib.h>
char *str_concat(char *s1, char *s2)
{
    char *s1s2;
    int r = 0, s1len = 0, t = 0, s2len = 0;

    while (s1 && s1[s1len])
    {
        s1len++;
    }
    while (s2 && s2[s2len])
    {
        s2len++;
    }
    s1s2 = malloc(sizeof(char) * (s1len + s2len + 1));
    if (s1s2 == NULL)
    {
        return (NULL);
    }
    r = 0;
    t = 0;
    if (s1)
    {
        while (r < s1len)
        {
            s1s2[r] = s1[r];
            r++;
        }
    }
    if (s2)
    {
        while (t < s2len)
        {
            s1s2[r] = s2[t];
            r++;
            t++;
        }
    }
    s1s2[r] = '\0';
    return (s1s2);
}


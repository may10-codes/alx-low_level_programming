int *array_range(int min, int max)
{
    int *ptr;
    int i;
    int total = max - min + 1;

    if (min > max)
        return (NULL);

    ptr = malloc(sizeof(min) * total);

    if (ptr == NULL)
        return (NULL);

    for (i = 0; i < total; i++)
    {
        ptr[i] = min;
        min++;
    }

    return (ptr);
}


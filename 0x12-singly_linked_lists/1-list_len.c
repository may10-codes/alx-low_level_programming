#include "lists.h"

/**
 * list_len - Number of elements in the list
 * @h: Body of linked list
 *
 * Return: Number of elements in list
 */
size_t list_len(const list_t *h)
{
    const list_t *tee;
    size_t count = 0;

    tee = h;

    while (tee != NULL)
    {
        count++;
        tee = tee->next;
    }

    return count;
}


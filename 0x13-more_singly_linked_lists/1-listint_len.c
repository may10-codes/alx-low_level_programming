#include "lists.h"

size_t listint_len(const listint_t *h)
{
    size_t count = 0;
    const listint_t *tee;

    tee = h;

    while (tee!= NULL)
    {
        count++;
        tee = tee->next;
    }

    return (count);
}
i

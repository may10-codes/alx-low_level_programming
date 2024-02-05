#include "lists.h"

void free_listint(listint_t *head)
{
    listint_t *tee;

    while (head != NULL)
    {
        tee = head;
        head = head->next;
        free(tee);
    }
}


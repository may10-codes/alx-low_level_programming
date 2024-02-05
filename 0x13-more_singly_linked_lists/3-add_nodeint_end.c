#include "lists.h"

listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *tee;
    listint_t *new_node = malloc(sizeof(listint_t));

    tee = *head;

    if (new_node == NULL)
        return (NULL);

    new_node->n = n;
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        while (tee->next != NULL)
        {
            tee = tee->next;
        }

        tee->next = new_node;
    }

    return (new_node);
}


#include "lists.h"

/**
 * delete_nodeint_at_index - Delete node at index
 * @head: Node for deletion
 * @index: Index for deletion
 *
 * Return: 1 if success, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *curr, *temp;
    unsigned int count = 0;

    if (*head == NULL || head == NULL)
        return (-1);

    curr = *head;

    if (index == 0)
    {
        *head = (*head)->next;
        free(curr);
        return (1);
    }

    while (curr)
    {
        if (count == index - 1)
        {
            temp = curr->next;

            if (temp == NULL)
                return (-1);

            curr->next = temp->next;
            free(temp);
            return (1);
        }
        count++;
        curr = curr->next;
    }

    return (-1);
}


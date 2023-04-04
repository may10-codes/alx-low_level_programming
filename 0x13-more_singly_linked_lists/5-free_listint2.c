#include "lists.h"
#include <stdlib.h>
#define node listint_t

/**
 * free_listint2 - Frees a list
 * @head: Pointer to address of a list
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;

	listint_t *current = *head;
	while (current != NULL)
	{
		listint_t *tmp = current;
		current = current->next;
		free(tmp);
	}

	*head = NULL;
}


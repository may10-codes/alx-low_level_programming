#include "lists.h"
#include <stdlib.h>
#define node listint_t

/**
 * free_listint - Frees a list
 * @head: Pointer to a struct
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

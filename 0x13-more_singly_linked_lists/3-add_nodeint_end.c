#include <stdio.h>
#include "lists.h"

/**
 * struct node - linked list node structure
 *
 * @data: integer data for the node
 * @next: pointer to the next node in the list
 */
typedef struct node
{
    int data;
    struct node *next;
} node_t;

/**
 * add_node - adds a new node to the end of a linked list
 *
 * @list: pointer to a pointer to the head of the list
 * @data: integer data for the new node
 */
void add_node(node_t **list, int data)
{
    node_t *new_node = malloc(sizeof(node_t)); // Allocate memory for the new node
    new_node->data = data; // Set the data for the new node
    new_node->next = NULL; // Set the next pointer to NULL since this is the last node

    if (*list == NULL) {
        // If the list is empty, make this node the head of the list
        *list = new_node;
    } else {
        // Traverse the list to find the last node
        node_t *current = *list;
        while (current->next != NULL) {
            current = current->next;
        }
        // Add the new node after the last node
        current->next = new_node;
    }
}

/**
 * main - entry point for the program
 *
 * Return: 0 on success
 */
int main(void)
{
    node_t *list = NULL; // Initialize the list to NULL

    // Add two nodes to the list
    add_node(&list, 1);
    add_node(&list, 2);

    // Print out the contents of the list
    node_t *current = list;
    while (current != NULL)
    {
        printf("%d\n", current->data);
        current = current->next;
    }

    return (0);
}


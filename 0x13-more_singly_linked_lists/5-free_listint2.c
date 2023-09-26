#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp_node;
	listint_t *current_node;

	if (head)
    {
	    current_node = *head;
	    while ((temp_node = current_node) != NULL)
	    {
		    current_node = current_node->next;
		    free(temp_node);
	    }
	    *head = NULL;
    }
}

#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int popped_value;
	listint_t *current_node;
	listint_t *new_head;

	if (*head == NULL)
		return (0);

	current_node = *head;
	popped_value = current_node->n;
	new_head = current_node->next;
	free(current_node);

	*head = new_head;

	return (popped_value);
}

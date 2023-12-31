#include "lists.h"

/**
 * add_nodeint_end - Add a new node at the end
 * of a linked list.
 * @head: Pointer to the head of the list.
 * @n: Value to be added to the new node.
 *
 * Return: Address of the new element, NULL if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	current_node = *head;

	if (current_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (current_node->next != NULL)
		{
			current_node = current_node->next;
		}

		current_node->next = new_node;
	}

	return (*head);
}

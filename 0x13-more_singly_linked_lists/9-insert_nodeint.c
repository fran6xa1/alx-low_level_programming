#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: A pointer to a pointer to the head of the list.
 * @index: The index at which the new node should be inserted.
 * @n: The integer value to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	unsigned int i;
	listint_t *new_node;
	listint_t *current_node;

	current_node = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && current_node != NULL; i++)
		{
			current_node = current_node->next;
		}
	}

	if (current_node == NULL && index != 0)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (index == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = current_node->next;
		current_node->next = new_node;
	}

	return (new_node);
}

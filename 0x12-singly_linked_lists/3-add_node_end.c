#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *Present_node;
	size_t a;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);

	for (a = 0; str[a]; a++)
		;

	newnode->len = a;
	newnode->next = NULL;
	Present_node = *head;

	if (Present_node == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (Present_node->next != NULL)
			Present_node = Present_node->next;
		Present_node->next = newnode;
	}

	return (*head);
}

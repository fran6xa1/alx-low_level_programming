#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *Present_node;

	while ((Present_node = head) != NULL)
	{
		head = head->next;
		free(Present_node->str);
		free(Present_node);
	}
}

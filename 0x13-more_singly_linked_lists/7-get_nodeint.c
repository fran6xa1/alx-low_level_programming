#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: head of a list.
 * @index: index of the node.
 *
 * Return: nth node. If node does not exist, returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int new_index)
{
    unsigned int current_index;

    for (current_index = 0; current_index < new_index && head != NULL; current_index++)
    {
        head = head->next;
    }

    return head;
}

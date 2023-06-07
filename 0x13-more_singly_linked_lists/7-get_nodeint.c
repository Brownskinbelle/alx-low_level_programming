#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: The first node in the linked list
 * @index: The index of the node to return
 *
 * Return: A pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *tmp = head;

	while (tmp && a < index)
	{
		tmp = tmp->next;
		a++;
	}

	return (tmp ? tmp : NULL);
}

#include "lists.h"

/**
* listint_len - A function that returns the number of elements
* in a linked listint_t list
* @h: A pointer to a listint_t list
* Return: This returns the number of elements in the list
*/
size_t listint_len(const listint_t *h)
{
	size_t sub = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		sub++;
		h = h->next;
	}

	return (sub);
}

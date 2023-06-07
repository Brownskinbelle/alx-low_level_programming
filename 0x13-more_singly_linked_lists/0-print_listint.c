#include "lists.h"

/**
* print_listint - A function that prints all the elements of a listint_t list
* @h: a pointer to a listint_t list
* Return: returns the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t m = 0;

	if (h == NULL)
		return (m);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		m++;
		h = h->next;
	}

	return (m);
}

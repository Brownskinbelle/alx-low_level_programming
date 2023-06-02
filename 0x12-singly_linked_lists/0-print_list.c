#include <stdio.h>
#include "lists.h"

/**
 * print_list - this prints all the elements of a linked list
 * @h: This is a pointer to the list_t to print
 *
 * Return: This returns the number of nodes printed
 */
size_t print_list(const list_t *h)
{

	size_t b = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");

			else
				printf("[%u] %s\n", h->len, h->str);

			h = h->next;

			b++;
		}
	return (b);
}

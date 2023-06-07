#include "lists.h"

/**
 * pop_listint - This deletes the head node of a linked list
 * @head:  This is a pointer to the first element in the linked list
 *
 * Return: This is the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int numc;

	if (!head || !*head)
		return (0);

	numc = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (numc);
}

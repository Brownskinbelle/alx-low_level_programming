#include "lists.h"

/**
* add_nodeint - This is a function that adds a new node at the beginning
* of a listint_t list
* @head: This is the head of the listint_t list
* @n: This is the data to be added in the new node
* Return: This returns the address of the new element
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		*head = new;

		return (new);
	}

	 new->next = *head;
	new->n = n;
	*head = new;

	return (new);
}

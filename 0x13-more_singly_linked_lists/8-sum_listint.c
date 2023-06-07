#include "lists.h"

/**
* sum_listint - This is a function that returns the sum of all the
* data (n) of a listint_t linked list
* @head: This is the head of the list
* Return: This returns the sum of all the n's
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}

#include "lists.h"

/**
 * find_listint_loop - This finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: The address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *snail = head;
	listint_t *sonic = head;

	if (!head)
		return (NULL);

	while (snail && sonic && sonic->next)
	{
		sonic = sonic->next->next;
		snail = snail->next;
		if (sonic == snail)
		{
			snail = head;
			while (snail != sonic)
			{
				snail = snail->next;
				sonic = sonic->next;
			}
			return (sonic);
		}
	}

	return (NULL);
}

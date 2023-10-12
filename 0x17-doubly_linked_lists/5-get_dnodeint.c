#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a linked list.
 * @head: pointer to first node
 * @index: node index
 * Return: returns the nth node of a linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
		i++;
	}
	return (NULL);
}

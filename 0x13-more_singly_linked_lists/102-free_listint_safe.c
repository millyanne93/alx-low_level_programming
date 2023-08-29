#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *temp;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		listint_t *current = *h;
		*h = (*h)->next;
		if (current - current->next > 0)
		{
			temp = current->next;
			free(current);
		}
		else
		{
			free(current);
			break;
		}
		len++;
	}
	*h = NULL;
	return (len);
}

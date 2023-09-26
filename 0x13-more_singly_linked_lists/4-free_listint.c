#include "lists.h"

/**
 * free_listint - this is function that frees a linked list.
 * @head: listint_t list to be freed function.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

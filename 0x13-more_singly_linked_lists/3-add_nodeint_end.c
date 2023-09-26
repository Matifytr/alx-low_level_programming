#include "lists.h"

/**
 * add_nodeint_end - this adds a node at the end of a linked list.
 * @head: thios is a pointer to the first element in the list
 * @n: data to insert in the new element function.
 *
 * Return: pointer to the new node, or NULL if recorded failure.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}

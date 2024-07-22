#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *dac;
	listint_t *temp = *head;

	dac = malloc(sizeof(listint_t));
	if (!dac)
		return (NULL);

	dac->n = n;
	dac->next = NULL;

	if (*head == NULL)
	{
		*head = dac;
		return (dac);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = dac;
	return (dac);
}

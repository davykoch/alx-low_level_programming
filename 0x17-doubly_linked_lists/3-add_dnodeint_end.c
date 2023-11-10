#include "lists.h"
/**
 * add_dnodeint_end -  adds a new node at the end of a dlistint_t list.
 * @head: double pointer to head of the list
 * @n: number of elements inthe list
 * Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	temp = *head;

	if (*head == NULL)
	{
		new->next = NULL;
		new->n = n;
		*head = new;

		return (new);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	new->next = NULL;
	new->n = n;
	temp->next = new;

	return (new);
}

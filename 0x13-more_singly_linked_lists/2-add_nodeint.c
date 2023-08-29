#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: haead of listint_t list.
 * @n: input of the new node
 * Return: address of the new element
 * or NULL if it failed
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

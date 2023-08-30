#include "lists.h"
/**
  * add_nodeint_end - adds a new node at the end of a listint_t list
  * @head: head of listint_t list.
  * @n: elements to be added to the new node
  * Return: address of the new elements
  * or NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	new = malloc(sizeof(listint_t));
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

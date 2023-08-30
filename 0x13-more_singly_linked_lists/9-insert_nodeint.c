#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @idx: index of the list where the new node should be added
 * @head: head of listint_t
 * @n: data added to be added to new node
 * Return: address of the new node
 * or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new;
	listint_t *temp;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = (*head);
		*head = new;
		return (new);
	}

	temp = *head;

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}

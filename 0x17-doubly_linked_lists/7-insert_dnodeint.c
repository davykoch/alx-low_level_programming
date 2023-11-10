#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @head: double pointer to the head of the dlistint_t list
 * @idx: index of the list where the new node should be added
 * @n: data to be added to the new node
 * Return: address of the new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head,
unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node, *temp;

	if (!head)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		if (*head)
			(*head)->prev = new_node;
		*head = new_node;
		return (new_node);
	}

	temp = *head;

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_node->next = temp->next;
			if (temp->next)
				temp->next->prev = new_node;
			temp->next = new_node;
			new_node->prev = temp;
			return (new_node);
		}
		else
			temp = temp->next;
	}

	free(new_node);
	return (NULL);
}

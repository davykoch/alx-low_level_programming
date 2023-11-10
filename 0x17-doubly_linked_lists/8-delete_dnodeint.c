#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given position.
 * @head: double pointer to the head of the dlistint_t list
 * @index: index of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp = *head;
	dlistint_t *current;

	if (!head || !(*head)) /* Check for empty list or NULL head pointer */
		return (-1); /* Return -1 indicating failure */

	if (index == 0)
	{
		current = *head; /* Store the current head */
		*head = (*head)->next; /* Update the head pointer */
		if (*head)
			(*head)->prev = NULL; /* Update the previous pointer of the new head */
		free(current); /* Free the memory of the first node */
		return (1); /* Return 1 indicating success */
	}

	while (tmp && i < index - 1) /* Traverse to the node before the index */
	{
		tmp = tmp->next;
		i++;
	}

	if (!tmp || !(tmp->next)) /* Check if index is out of bounds */
		return (-1); /* Return -1 indicating failure */

	current = tmp->next; /* Store the node to be deleted */

	tmp->next = current->next; /* Adjust the previous node's next pointer */
	if (current->next)
		current->next->prev = tmp; /* Adjust the next node's previous pointer */

	free(current); /* Free the memory of the deleted node */

	return (1); /* Return 1 indicating success */
}

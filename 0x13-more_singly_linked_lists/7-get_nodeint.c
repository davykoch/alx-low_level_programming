#include "lists.h"
/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list.
 * @head: head of listint_t
 * @index: the index of the node, starting at 0
 * Return:  nth node of a listint_t linked list
 * or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i = 0;

	if (!head)
	{
		return (NULL);
	}

	tmp = head;

	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++;
	}
	if (!tmp)/*If tmp becomes NULL before reaching the desired index*/
	{
		return (NULL);
	}

	return (tmp);/*return the node at desired index*/
}

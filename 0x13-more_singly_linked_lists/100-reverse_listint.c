#include "lists.h"
/**
 * reverse_listint - everses a listint_t linked list.
 * @head: pointer of first node listint_t linked list
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL;
	listint_t *current_node = *head;
	listint_t *next_node;

	while (current_node != NULL)
	{
		next_node = current_node->next;/*Store the next node*/
		current_node->next = prev_node;/*Change next pointer*/
		prev_node = current_node;/*Move prev_node to the current node*/
		current_node = next_node;/*Move current_node to the next node*/
	}

	*head = prev_node;/*Update head to point to  last node)*/

	return (*head);/*Return the new head (previously last node)*/
}

#include "lists.h"
/**
 * delete_nodeint_at_index -  deletes node  of a listint_t linked list.
 * @head: pointer to haed of a listint_t linked lists
 * @index: index of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = *head;
	listint_t *current;


	if (!head || !(*head)) /*Check for empty list or NULL head pointer*/
		return (-1); /*Return -1 indicating failure*/

	if (index == 0)
	{
		current = *head;/*Store the current head*/
		*head = (*head)->next; /*Update the head pointer*/
		free(current); /*Free the memory of the first node*/
		return (1); /*Return 1 indicating success*/
	}

	tmp = *head;

	while (tmp && i < index - 1) /*Traverse to the node before the index*/
	{
		tmp = tmp->next;
		i++;
	}

	if (!tmp || !(tmp->next)) /*Check if index is out of bounds*/
		return (-1); /*Return -1 indicating failure*/

	current = tmp->next; /*Store the node to be deleted*/
	tmp->next = current->next; /*Adjust the previous node's next pointer*/
	free(current); /*Free the memory of the deleted node*/

	return (1); /*Return 1 indicating success*/
}

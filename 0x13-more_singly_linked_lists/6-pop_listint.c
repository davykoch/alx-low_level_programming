#include "lists.h"
/**
  * pop_listint -  deletes the head node of a listint_t
  * @head: node's data
  * Return: the head node’s data (n).
  * or 0 if the linked list is empty
  */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(temp);

	return (n);
}

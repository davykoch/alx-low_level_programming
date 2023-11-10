#include "lists.h"
/**
 * sum_dlistint - returns sum of all the data (n) of a dlistint_t linked list.
 * @head: head of dlistint_t linked list.
 * Return: sum of all the data (n) of a dlistint_t linked list
 * or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}


#include "lists.h"
/**
  * sum_listint - returns sum of all the data (n) of a listint_t linked list
  * @head: head of  listint_t linked list
  * Return: sum of all the data (n) of a     listint_t linked list
  * or 0 if the list is empty
  */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}

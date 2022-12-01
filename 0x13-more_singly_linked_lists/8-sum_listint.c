#include <stdlib.h>
#include "lists.h"

/**
  * sum_listint - finds sum of all the data (n) of a linked list.
  * @head: head of linked list.
  *
  * Return: sum or 0 if empty.
  */
int sum_listint(listint_t *head)
{
	int amount = 0;

	if (head)
	{
		while (head)
		{
			amount += head->n;
			head = head->next;
		}
	}

	return (amount);
}

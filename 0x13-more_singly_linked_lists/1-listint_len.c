#include <stdio.h>
#include "lists.h"

/**
  * listint_len - Counts the elements in a linked list listint_t.
  * @h: The head of the linked list
  *
  * Return: Tnumber of elements in a linked listint_t.
  */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h != NULL)
	{
		while (h)
		{
			h = h->next;
			count++;
		}
	}

	return (count);
}

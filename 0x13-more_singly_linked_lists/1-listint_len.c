#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Number of elements in a list
 * @h: list head
 * Return: The number of elements in a linked list
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

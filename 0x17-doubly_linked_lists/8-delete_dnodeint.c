#include "lists.h"

/**
 *  delete_dmodeint_at_index - Deletes a node from given index.
 *  @head: A pointer to the head of the dlistint_t.
 *  @index: The index of the node of delete.
 *
 *  Return: Upon sucess - 1.
 *          otherwise - -1.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ext = *head;

	if (*head == NULL)
		return (-1);
	for (; index != 0; index--)
	{
		if (ext == NULL)
			return (-1);
		ext = ext->next;
	}
	if (ext == *head)
	{ 
		*head = ext->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		ext->prev->next = ext->next;
		if (ext->next != NULL)
			ext->next->prev = ext->prev;
	}

	free(ext);
	return(1);
}

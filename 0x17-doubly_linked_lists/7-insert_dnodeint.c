#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a new node in a given postion.
 * @h: A pointer to the head of the dlistint_t list.
 * @idx: The position to insert at.
 * @n: The interger for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         otherwise - the address of the new node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *cast = *h, *new;

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (; idx != 1; idx--)
	{
		cast = cast->next;
		if (cast == NULL)
			return (NULL);
	}

	if (cast->next == NULL)
		return (add_dnodeint_end(h, n));
	
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	        return (NULL);

	new->n = n;
	new->prev = cast;
	new->next = cast->next;
	cast->next->prev = new;
	cast->next = new;

	return (new);
}

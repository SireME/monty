#include "monty.h"

/**
 * rotl - mmove second node to top and top to last
 *
 * Return: nothing
 */
void rotl(void)
{
	int first;
	stack_t *current;

	first = stack->n;
	current = stack;
	while (current != NULL)
	{
		if (current->next != NULL)
			current->n = current->next->n;
		else if (current->next == NULL)
			current->n = first;
		current = current->next;
	}
}

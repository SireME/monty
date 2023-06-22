#include "monty.h"
/**
 * free_stack - free linked list
 * @head: entry to linked list/stack
 *
 * Return: nothing
 */

void free_stack(stack_t *head)
{
	while (head != NULL)
	{
		if (head->prev != NULL)
			free(head->prev);
		if (head->next == NULL)
		{
			free(head);
			break;
		}
		head = head->next;
	}
}

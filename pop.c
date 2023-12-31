#include "monty.h"

/**
 * pop - remove topmost element from stack
 * @linenum: linenumber of code run
 *
 * Return: nothing
 */

void pop(int linenum)
{
	stack_t *temp;

	if (stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", linenum);
		exit(EXIT_FAILURE);
	}
	temp = stack;
	stack = stack->next;
	if (stack != NULL)
		stack->prev = NULL;
	free(temp);
}

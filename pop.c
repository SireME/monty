#include "monty.h"

/**
 * pop - remove topmost element from stack
 * @linenum: linenumber of code run
 *
 * Return: nothing
 */

void pop(int linenum)
{
	if (stack == NULL)
	{
		fprintf(stderr, "L%dcan't pop an empty stack", linenum);
		exit(EXIT_FAILURE);
	}
	stack = stack->next;
	if (stack != NULL)
		stack->prev = NULL;
}

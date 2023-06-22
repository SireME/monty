#include "monty.h"

/**
 * add - add first two top nodes of stack
 * @linenum: line number of current add
 *
 * Return: nothing
 */
void add(int linenum)
{
	int sum = 0;

	if (stack == NULL || stack->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", linenum);
		exit(EXIT_FAILURE);
	}
	else
	{
		sum += stack->n;
		pop(linenum);
		stack->n += sum;
	}
}

#include "monty.h"
/**
 * swap - swap the values of the first two stacks
 * @linenum: line number
 *
 * Return: nothing
 */
void swap(int linenum)
{
	int temp;

	if (stack == NULL || stack->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", linenum);
		exit(EXIT_FAILURE);
	}
	else
	{
		temp = stack->n;
		stack->n = stack->next->n;
		stack->next->n = temp;
	}
}

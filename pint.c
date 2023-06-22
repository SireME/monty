#include "monty.h"
/**
 * pint - print value at the top of stack
 * @linenum: line number
 *
 * Return: nothing
 */
void pint(int linenum)
{
	if (stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", linenum);
		exit(EXIT_FAILURE);
	}
	else if (stack->prev == NULL)
		printf("%d\n", stack->n);
}

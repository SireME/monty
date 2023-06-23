#include "monty.h"

/**
 * pchar - print char at top of stack
 * @linenum: line number
 *
 * Return: nothing
 */

void pchar(int linenum)
{
	if (stack == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", linenum);
		exit(EXIT_FAILURE);
	}
	if (stack->n < 0 || stack->n > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", linenum);
		exit(EXIT_FAILURE);
	}
	putchar(stack->n);
	putchar('\n');
}

#include "monty.h"

/**
 * pstr - print stack as string
 *
 * Return: nothing
 */
void pstr(void)
{
	while (stack != NULL)
	{
		if (stack->n == 0)
			break;
		if (stack->n < 0 || stack->n > 127)
			break;
		printf("%c", stack->n);
		stack = stack->next;
	}
	putchar('\n');

}

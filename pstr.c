#include "monty.h"

/**
 * pstr - print stack as string
 *
 * Return: nothing
 */
void pstr(void)
{
	stack_t *temp;

	temp = stack;
	while (temp != NULL)
	{
		if (temp->n == 0)
			break;
		if (temp->n < 0 || temp->n > 127)
			break;
		printf("%c", temp->n);
		temp = temp->next;
	}
	putchar('\n');

}

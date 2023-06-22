#include "monty.h"

/**
 * sub - subtract first node value from second
 * @linenum: line number of current sub
 *
 * Return: nothing
 */
void sub(int linenum)
{
	int sub = 0;

	if (stack == NULL || stack->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", linenum);
		exit(EXIT_FAILURE);
	}
	else
	{
		sub += stack->n;
		pop(linenum);
		stack->n -= sub;
	}
}
/**
 * dive - divide second top element of stack by top element
 * @linenum: line number of current sub
 *
 * Return: nothing
 */
void dive(int linenum)
{
	int top = 0;

	if (stack == NULL || stack->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", linenum);
		exit(EXIT_FAILURE);
	}
	else
	{
		top += stack->n;
		if (top == 0)
		{
			fprintf(stderr, "L%d: division by zero\n", linenum);
			exit(EXIT_FAILURE);
		}
		pop(linenum);
		stack->n /= top;
	}
}

/**
 * mul - multiply second top element with top element
 * @linenum: line number of current sub
 *
 * Return: nothing
 */
void mul(int linenum)
{
	int top = 0;

	if (stack == NULL || stack->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", linenum);
		exit(EXIT_FAILURE);
	}
	else
	{
		top += stack->n;
		pop(linenum);
		stack->n *= top;
	}
}

/**
 * mod - subtract first node value from second
 * @linenum: line number of current sub
 *
 * Return: nothing
 */
void mod(int linenum)
{
	int top = 0;

	if (stack == NULL || stack->next == NULL)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", linenum);
		exit(EXIT_FAILURE);
	}
	else
	{
		top += stack->n;
		if (top == 0)
		{
			fprintf(stderr, "L%d: division by zero\n", linenum);
			exit(EXIT_FAILURE);
		}
		pop(linenum);
		stack->n %= top;
	}
}


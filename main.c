#include "monty.h"

/**
 * main - entry to program
 * @argc: number of parameter
 * @argv: argument vector
 *
 * Return: status of program
 */

int main(int argc, char **argv)
{
	stack_t *stack = NULL;

	(void)argv;
	if (argc != 2)
	{
		write(2, "USAGE: monty file\n", 18);
		exit(EXIT_FAILURE);
	}

	push(&stack, 66);
	pall(stack);

	return (0);
}

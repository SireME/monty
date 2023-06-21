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
	FILE *fl;

	(void)argv;
	if (argc != 2)
	{
		write(2, "USAGE: monty file\n", 18);
		exit(EXIT_FAILURE);
	}
	fl = open(argv[1], "r");
	if (fl == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	fclose(fl);
	push(&stack, 66);
	pall(stack);

	return (0);
}

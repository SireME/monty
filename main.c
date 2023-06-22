#include "monty.h"

/**
 * main - entry to program
 * @argc: number of parameter
 * @argv: argument vector
 *
 * Return: status of program
 */
stack_t *stack = NULL;
int main(int argc, char **argv)
{
	FILE *file_stream;

	(void)argv;
	if (argc != 2)
	{
		write(2, "USAGE: monty file\n", 18);
		exit(EXIT_FAILURE);
	}
	file_stream = fopen(argv[1], "r");
	if (file_stream == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	readandtok(file_stream);
	fclose(file_stream);

	return (0);
}

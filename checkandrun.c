#include "monty.h"

/**
 * checknrun - check opcode and run accordingly
 * @opcode: opcode to check
 * @arg: opcode argument if any
 *
 * Return: nothing
 */

void checknrun(char *opcode, int arg, int linenum)
{
	if (strcmp(opcode, "push") == 0)
		push(&stack, arg);
	else if (strcmp(opcode, "pall") == 0)
		pall(stack);
	else if (strcmp(opcode, "pint") == 0)
		pint(linenum);
}

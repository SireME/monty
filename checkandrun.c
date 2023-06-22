#include "monty.h"

/**
 * checknrun - check opcode and run accordingly
 * @opcode: opcode to check
 * @arg: opcode argument if any
 *
 * Return: nothing
 */

void checknrun(char *opcode, int arg)
{
	if(strcmp(opcode, "push") == 0)
		push(&stack, arg);
	else if (strcmp(opcode, "pall") == 0)
		pall(stack);
}

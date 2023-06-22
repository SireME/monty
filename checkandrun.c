#include "monty.h"

/**
 * checknrun - check opcode and run accordingly
 * @opcode: opcode to check
 * @arg: opcode argument if any
 * @linenum: line number
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
	else if (strcmp(opcode, "pop") == 0)
		pop(linenum);
	else if (strcmp(opcode, "swap") == 0)
		swap(linenum);
	else if (strcmp(opcode, "add") == 0)
		add(linenum);
}

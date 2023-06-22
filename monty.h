#ifndef __MONTY_H__
#define __MONTY_H__

#define _GNU_SOURCE
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

extern stack_t *stack;
/*0. push, pall*/
stack_t *push(stack_t **head, const int n);
size_t pall(stack_t *h);
void readandtok(FILE *stream);
void checknrun(char *opcode, int arg, int linenum);

/*free stack memory*/
void free_stack(stack_t *head);

/*pint file*/
void pint(int linenum);

/*pop file*/
void pop(int linenum);
#endif

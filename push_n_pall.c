#include "monty.h"
/**
 * push - insert node at start of linked list
 * @head: entry to list
 * @n: value to add
 *
 * Return: address to new node
 */

stack_t *push(stack_t **head, const int n)
{
	stack_t *newnode;

	newnode = malloc(sizeof(newnode));/*allocate newnode memory*/
	if (newnode == NULL)
	{
		free(newnode);
		write(2, "Error: malloc failed\n", 21);
		exit(EXIT_FAILURE);
	}

	/*populate newnode*/
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;

	/* modify previous pointer of current head node*/
	if (*head != NULL)
		(*head)->prev = newnode;

	/* point newnode to head*/
	*head = newnode;

	return (*head);
}
/**
 * pall - print linked list content
 * @h: head to linked list
 *
 * Return: Number of nodes
 */

size_t pall(stack_t *h)
{
	size_t n_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		n_nodes += 1;
		h = h->next;
	}

	return (n_nodes);
}

#include "monty.h"

/**
 * push - Adds a node to the stack.
 * @new: Pointer to the new node.
 * @ln: the line number of of the opcode.
 */

void push(stack_t **new, __attribute__((unused))unsigned int ln)
{
	stack_t *tmp;

	if (new == NULL || *new == NULL)
		exit(EXIT_FAILURE);
	if (head == NULL)
	{
		head = *new;
		return;
	}
	tmp = head;
	head = *new;
	head->next = tmp;
	tmp->prev = head;
}


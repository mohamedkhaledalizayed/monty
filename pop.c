#include "monty.h"

/**
 * pop - remove a node in the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @line_number: the line number of of the opcode.
 */

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	if (stack == NULL || *stack == NULL)
		error1(7, line_number);

	tmp = *stack;
	*stack = tmp->next;
	if (*stack != NULL)
		(*stack)->prev = NULL;
	free(tmp);
}


#include "monty.h"

/**
 * add - Add the 1st and 2nd top
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @line_number: Interger representing the line number of of the opcode.
 */

void add(stack_t **stack, unsigned int line_number)
{
	int rt;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		error1(8, line_number, "add");

	(*stack) = (*stack)->next;
	rt = (*stack)->n + (*stack)->prev->n;
	(*stack)->n = rt;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}

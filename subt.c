#include "monty.h"

/**
 * subt - subtract the 1st and 2nd top
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @line_number: the line number of of the opcode.
 */

void subt(stack_t **stack, unsigned int line_number)
{
	int sb;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)

		error1(8, line_number, "sub");


	(*stack) = (*stack)->next;
	sb = (*stack)->n - (*stack)->prev->n;
	(*stack)->n = sb;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}

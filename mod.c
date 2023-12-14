#include "monty.h"

/**
 * mod - modulo of the two tops
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @line_number: the line number of of the opcode.
 */

void mod(stack_t **stack, unsigned int line_number)
{
	int rt;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)

		error1(8, line_number, "mod");


	if ((*stack)->n == 0)
		error1(9, line_number);
	(*stack) = (*stack)->next;
	rt = (*stack)->n % (*stack)->prev->n;
	(*stack)->n = rt;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}

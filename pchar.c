#include "monty.h"

/**
 * pchar - Print the Ascii value of int
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @line_number: the line number of of the opcode.
 */

void pchar(stack_t **stack, unsigned int line_number)
{
	int ascii;

	if (stack == NULL || *stack == NULL)
		error2(11, line_number);

	ascii = (*stack)->n;
	if (ascii < 0 || ascii > 127)
		error2(10, line_number);
	printf("%c\n", ascii);
}

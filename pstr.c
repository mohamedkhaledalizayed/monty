#include "monty.h"
/**
 * pstr - Print a string by ascii
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @ln: the line number of of the opcode.
 */

void pstr(stack_t **stack, __attribute__((unused))unsigned int ln)
{
	int ascii;
	stack_t *tmp;

	if (stack == NULL || *stack == NULL)
	{
		printf("\n");
		return;
	}

	tmp = *stack;
	while (tmp != NULL)
	{
		ascii = tmp->n;
		if (ascii <= 0 || ascii > 127)
			break;
		printf("%c", ascii);
		tmp = tmp->next;
	}
	printf("\n");
}

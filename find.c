#include "monty.h"

/**
 * find - find the appropriate function
 * @opcode: opcode
 * @val: argument of opcode
 * @format:  storage format. If 0 Nodes will be entered as a stack.
 * @ln: line number
 * if 1 nodes will be entered as a queue.
 *
 * Return: void
 */

void find(char *opcode, char *val, int ln, int format)
{
	int x;
	int flag;

	instruction_t function[] = {
		{"push", push},
		{"pall", print},
		{"pint", top},
		{"pop", pop},
		{"nop", nop},
		{"swap", swap},
		{"add", add},
		{"sub", subt},
		{"div", fdiv},
		{"mul", mul},
		{"mod", mod},
		{"pchar", pchar},
		{"pstr", pstr},
		{"rotl", rotl},
		{"rotr", rotr},
		{NULL, NULL}
	};

	if (opcode[0] == '#')
		return;

	for (flag = 1, x = 0; function[x].opcode != NULL; x++)
	{
		if (strcmp(opcode, function[x].opcode) == 0)
		{
			call_func(function[x].f, opcode, val, ln, format);
			flag = 0;
		}
	}
	if (flag == 1)
		error(3, ln, opcode);
}

#include "monty.h"

/**
 * error - Print appropiate error messages.
 * @error_code: The error codes are the following:
 * (1) => if the user does not give any file or more to the program
 * (2) => if the file provided is not a file that can be opened or read.
 * (3) => if the file provided contains an invalid instruction.
 * (4) => When the program is unable to malloc more memory.
 * (5) => When the parameter passed to the instruction "push" is not an int.
 */

void error(int error_code, ...)
{
	va_list arg;
	char *op;
	int num;

	va_start(arg, error_code);
	switch (error_code)
	{
		case 1:
			fprintf(stderr, "USAGE: monty file\n");
			break;
		case 2:
			fprintf(stderr, "Error: Can't open file %s\n",
				va_arg(arg, char *));
			break;
		case 3:
			num = va_arg(arg, int);
			op = va_arg(arg, char *);
			fprintf(stderr, "L%d: unknown instruction %s\n", num, op);
			break;
		case 4:
			fprintf(stderr, "Error: malloc failed\n");
			break;
		case 5:
			fprintf(stderr, "L%d: usage: push integer\n", va_arg(arg, int));
			break;
		default:
			break;
	}
	frees();
	exit(EXIT_FAILURE);
}

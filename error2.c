#include "monty.h"

/**
 * error2 - print message error
 * @error_code: The error codes are the following:
 * (10) ~> if the number inside a node is outside ASCII.
 * (11) ~> if The stack is empty.
 */

void error2(int error_code, ...)
{
	va_list arg;
	int num;

	va_start(arg, error_code);
	num = va_arg(arg, int);
	switch (error_code)
	{
		case 10:
			fprintf(stderr, "L%d: can't pchar, value out of range\n", num);
			break;
		case 11:
			fprintf(stderr, "L%d: can't pchar, stack empty\n", num);
			break;
		default:
			break;
	}
	frees();
	exit(EXIT_FAILURE);
}

#include "monty.h"

/**
 * readf - read a file
 * @fd: pointer to file
 *
 * Return: void
 */

void readf(FILE *fd)
{
	int line_number, format = 0;
	char *buffer = NULL;
	size_t len = 0;

	for (line_number = 1; getline(&buffer, &len, fd) != -1; line_number++)
	{
		format = split(buffer, line_number, format);
	}
	free(buffer);
}

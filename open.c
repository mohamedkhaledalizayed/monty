#include "monty.h"

/**
 * open - open a file
 * @its_name: the file name
 *
 * Return: void
 */

void open(char *its_name)
{
	FILE *fd = fopen(its_name, "r");

	if (its_name == NULL || fd == NULL)
		error(2, its_name);

	readf(fd);
	fclose(fd);
}


#include <stdio.h>
#include <stdlib.h>

/**
 * verify_commandline_arguments - Verifies the command-line arguments
 * @argc: The number of command-line arguments
 *
 * Description: This function verifies that the number of
 * command-line arguments
 * is exactly 2. If the condition is not met, it prints an error message and
 * terminates the program.
 */
void verify_commandline_arguments(int argc)
{
	if (argc == 2)
		return;
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}

#include "monty.h"

/**
 * handle_file_stream_failure - Handle failure to open file stream
 * @file_name: Name of the file that failed to open
 * Return: always void
 */
void handle_file_stream_failure(char *file_name)
{
	fprintf(stderr, "Error: Can't open file %s\n", file_name);
	deallocate_arg_data();
	exit(EXIT_FAILURE);
}

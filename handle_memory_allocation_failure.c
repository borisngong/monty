#include "monty.h"
/**
 * handle_memory_allocation_failure - responsible for hanling the memory
 * allocation failure.
 * Return: always void
 */
void handle_memory_allocation_failure(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	deallocate_arg_data();
	exit(EXIT_FAILURE);
}

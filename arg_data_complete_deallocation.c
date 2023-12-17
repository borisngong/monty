#include "monty.h"

/**
 * arg_data_complete_deallocation - Frees all allocated memory for arguments.
 *
 * Return: always void
 */

void arg_data_complete_deallocation(void)
{
	handle_close_stream();
	deallocate_substrings();
	deallocate_arg_data();
}

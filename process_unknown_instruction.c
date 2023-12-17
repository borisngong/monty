#include "monty.h"

/**
 * process_unknown_instruction - Handle unknown instruction
 *
 * This function prints an error message indicating that the instruction
 * is unknown, closes the file stream, deallocates memory for substrings,
 * deallocates the arg_data structure, and exits the program with a
 * failure status.
 *
 * Return: Always 0
 */
void process_unknown_instruction(void)
{
	fprintf(stderr, "L%d: unknown instruction %s\n",
	arg_data->line_number, arg_data->instruction->opcode);
	handle_close_stream();
	deallocate_substrings();
	deallocate_arg_data();
	exit(EXIT_FAILURE);
}

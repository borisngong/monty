#include "monty.h"

/**
 * setup_arguments - Initialize argument data structure
 *
 * This function allocates memory for the argument data structure,
 * initializes its members, and handles memory allocation failures.
 *
 * Return: Always void
 */
void setup_arguments(void)
{
	arg_data = malloc(sizeof(arg_t));

	if (arg_data == NULL)
	{
		handle_memory_allocation_failure();
	}
	arg_data->instruction = malloc(sizeof(instruction_t));
	if (arg_data->instruction == NULL)
	{
		handle_memory_allocation_failure();
	}
	arg_data->stream = NULL;
	arg_data->line = NULL;
	arg_data->line_number = 0;
	arg_data->k_substring = 0;
	arg_data->head = NULL;
	arg_data->stack_len = 0;
	arg_data->stack = 1;
}

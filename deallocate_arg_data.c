#include "monty.h"
/**
 * deallocate_arg_data - responsible for deallocating memory used by arg_data
 *
 * Return: always void
*/
void deallocate_arg_data(void)
{
	if (arg_data == NULL)
		return;

	if (arg_data->instruction)
	{
		free(arg_data->instruction);
		arg_data->instruction = NULL;
	}

	deallocate_head();

	if (arg_data->line)
	{
		free(arg_data->line);
		arg_data->line = NULL;
	}

	free(arg_data);
}

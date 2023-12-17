#include "monty.h"
/**
 * deallocate_substrings - Deallocate memory used for substrings
 *
 * Return: always void
*/
void deallocate_substrings(void)
{
	int i = 0;

	if (arg_data->substring == NULL)
		return;

	while (arg_data->substring[i])
	{
		free(arg_data->substring[i]);
		i++;
	}
	free(arg_data->substring);
	arg_data->substring = NULL;
}

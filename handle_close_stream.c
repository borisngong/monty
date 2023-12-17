#include "monty.h"

/**
 * handle_close_stream - reponsible for Closing the file stream
 *
 * Return: Always void
 */
void handle_close_stream(void)
{
	if (arg_data->stream == NULL)
		return;

	fclose(arg_data->stream);
	arg_data->stream = NULL;
}

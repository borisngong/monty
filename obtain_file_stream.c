#include "monty.h"
/**
 * obtain_file_stream - Opens the specified file and obtains the file stream.
 * @file_name: The name of the file to open.
 * Return: Always void
*/
void obtain_file_stream(char *file_name)
{
	FILE *file = fopen(file_name, "r");

	if (file == NULL)
	{
		handle_file_stream_failure(file_name);
	}
	arg_data->stream = file;
}

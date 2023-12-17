#include "monty.h"
arg_t *arg_data = NULL;
/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	size_t k = 0;

	verify_commandline_arguments(argc);
	setup_arguments();
	obtain_file_stream(argv[1]);

	while (getline(&arg_data->line, &k, arg_data->stream) != -1)
	{
		arg_data->line_number += 1;
		tokenize_line();
		obtain_instruction();
		execute_instruction();
		deallocate_substrings();
	}
	handle_close_stream();
	deallocate_arg_data();
	return (0);
}

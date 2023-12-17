#include "monty.h"

/**
 * tokenize_line - reponsible for tokenizing the input line
 *
 * Description: This function tokenizes the input line by splitting it into
 * substrings
 * based on delimiters. It stores the substrings in the arg_data structure.
 *
 * Return: Always void
 */
void tokenize_line(void)
{
	int j = 0;
	char *delims = " \n";
	char *sub_string = NULL;
	char *line_copy = NULL;

	line_copy = malloc(sizeof(char) * (strlen(arg_data->line) + 1));
	strcpy(line_copy, arg_data->line);
	arg_data->k_substring = 0;
	sub_string = strtok(line_copy, delims);
	while (sub_string)
	{
		arg_data->k_substring += 1;
		sub_string = strtok(NULL, delims);
	}

	arg_data->substring = malloc(sizeof(char *) * (arg_data->k_substring + 1));
	strcpy(line_copy, arg_data->line);
	sub_string = strtok(line_copy, delims);
	while (sub_string)
	{
		arg_data->substring[j] = malloc(sizeof(char) * (strlen(sub_string) + 1));
		if (arg_data->substring[j] == NULL)
			handle_memory_allocation_failure();
		strcpy(arg_data->substring[j], sub_string);
		sub_string = strtok(NULL, delims);
		j++;
	}
	arg_data->substring[j] = NULL;
	free(line_copy);
}

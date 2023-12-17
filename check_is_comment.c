#include "monty.h"

/**
 * check_is_comment - checks if the line is a comment.
 * @line: The line to check.
 * Return: 1 if the line is a comment, 0 otherwise.
 */
int
check_is_comment(const char *line)
{
	const char *input_line = line;

	while (*input_line == ' ' || *input_line == '\t')
	{
		input_line++;
	}
	if (*input_line == '#')
	{
		return (1);
	}
	return (0);
}

#include "monty.h"

/**
 * check_is_comment - responsible for checking if a substring of the token
 * starts with "#"
 * Return: 0 or 1
 */
int check_is_comment(void)
{
	if (
		arg_data->substring &&
		arg_data->substring[0] &&
		arg_data->substring[0][0] == '#'
	)
		return (1);

	return (0);
}
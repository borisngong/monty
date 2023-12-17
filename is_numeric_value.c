#include "monty.h"

/**
 * is_numeric_value - responsible for checking if a string represents a
 * numeric value
 * @string: The string to check
 *
 * Return: 1 if the string represents a numeric value, 0 otherwise
 */
int is_numeric_value(char *string)
{
	int j = 0;

	while (string[j])
	{
		if (j == 0 && string[j] == '-' && string[j + 1])
		{
			j++;
			continue;
		}
		if (string[j] < '0' || string[j] > '9')
			return (0);
		j++;
	}
	return (1);
}

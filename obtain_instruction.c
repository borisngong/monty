#include "monty.h"
/**
 * obtain_instruction - Obtains the instruction from the input and sets
 * the corresponding function pointer.
 * Return: always void
*/
void obtain_instruction(void)
{

	int j;
	instruction_t instruction[] = {
		{"push", &_bd_push}, {"pall", &_bd_pall},
		{"pint", &_bd_pint}, {"pop", &_bd_pop},
		{"swap", &_bd_swap}, {"add", &_bd_add},
		{"nop", &_bd_nop}, {"sub", &_bd_sub},
		{"div", &_bd_div}, {"mul", &_bd_mul},
		{"mod", &_bd_mod}, {"pchar", &_bd_pchar},
		{"pstr", &_bd_pstr},
		{NULL, NULL}
	};
	if (arg_data->k_substring == 0)
		return;
	for (j = 0; instruction[j].opcode != NULL; j++)
	{
		if (strcmp(instruction[j].opcode, arg_data->substring[0]) == 0)
		{
			arg_data->instruction->opcode = instruction[j].opcode;
			arg_data->instruction->f = instruction[j].f;
			return;
		}
	}
	process_unknown_instruction();
}

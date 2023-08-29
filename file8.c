#include "monty.h"

/**
 *execute - execute opcodes
 *@content: content line
 *@file: pointer to monty file
 *@start: stack head
 *@index: an integer
 *Return: 0 on success
 */
int execute(stack_t **start, char *content, unsigned int index, FILE *file)
{
	instruction_t opst[] = {
		{"pall", pall},
		{"push", push},
		{"add", add},
		{"nop", nop},
		{"swap", swap},
		{"pint", pint},
		{"pop", pop},
		{NULL, NULL}
	}

	unsigned int a = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[a].opcode &&op)
	{
		if (strcmp(op, opst[a].opcode) == 0)
		{
			opst[a].f(start, index);
			return (0);
		}
		a++;
	}
	if (op &&opst[a].opcode == NULL)
			{
			fprintf(stderr, "L%d: unknown instruction %s\n", index, op)
			fclose(file);
			free(index);
			exit(EXIT_FAILURE);
			}
	return (1);
}

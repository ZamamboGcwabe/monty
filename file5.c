#include "monty.h"

/**
 * f_pint - prints the value at the top of the stack
 *@start: start of the stack
 *@index: an integer
 */
void f_pint(stack_t **start, unsigned int index)
{
	if (*start == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", index);
		fclose(bus.file);
		free(bus.content);
		free_stack(*start);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*start)->n);
}

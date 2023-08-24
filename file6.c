#include "monty.h"

/**
 *f_pop - removes the top element of the stack
 *@start: start of the stack
 *@index: an integer
 */
void f_pop(stack_t **start, unsigned int index)
{
	stack_t *first;

	if (*start == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", index);
		fclose(bus.file);
		free(bus.content);
		free_stack(*start);
		exit(EXIT_FAILURE);
	}
	first = *start;
	*start = first->next;
	free(first);
}

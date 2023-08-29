#include "monty.h"

/**
 *add - adds the top two elements of the stack
 *@start: start of the stack
 *@index: an integer
 */
void add(stack_t **start, unsigned int index)
{
	int len = 0;
	int helper;
	stack_t *first;

	first = *start;
	while (first)
	{
		first = first->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", index);
		fclose(bus.file);
		free(bus.content);
		exit(EXIT_FAILURE);
	}
	first = *start;
	helper = first->n + first->next->n;
	first->next->n = helper;
	*start = first->next;
	free(first);
}

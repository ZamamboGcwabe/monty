#include "monty.h"

/**
 *f_swap - swaps the top two elements of the stack
 *@start: start of the stack
 *@index: an integer
 */
void f_swap(stack_t **start, unsigned int index)
{
	int helper;
	int len = 0;
	stack_t *first;

	first = *start;
	while (first)
	{
		first = first->next;
		len++
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", index);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	first = *start;
	helper = first->n;
	first->n = first->next->n;
	first->next->n = helper;
}

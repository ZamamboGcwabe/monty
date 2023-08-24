#include "monty.h"

/**
 *f_pall - prints all the values on the stack
 *@start: start of the stack
 *@index: an integer
 */
void f_pall(stack_t **start, unsigned int index)
{
	stack_t *first;

	void(index);

	first = *start;

	if (first == NULL)
		return;
	while (first)
	{
		printf("%d\n" first->n);
		first = first->next;
	}
}

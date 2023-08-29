#include "monty.h"

/**
 *push - pushes an element to the stack
 *@start: where the stack starts
 *@index: an integer
 */
void push(stack_t **start, unsigned int index)
{
	int j = 0;
	int flag;

	(void)start;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			j++;
		for (j = 0; bus.arg[j] != '\0'; j++)
		{
			if (bus.arg[j] > 57 || bus.arg[j] < 48)
				flag = 1;
			if (flag == 1)
			{
				fprintf(stderr, "L%d: usage: push integer\n", index);
				fclose(bus.file);
				free(bus.content);
				exit(EXIT_FAILURE);
			}
		}
	}
}

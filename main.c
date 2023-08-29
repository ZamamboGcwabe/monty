#include "monty.h"
bus_t bus = {NULL, NULL, NULL};
/**
 *main - interpretes the monty code
 *@argv: argument vector
 *argc: arument count
 *Return: 0 on success
 */
int main(int argc, char *argv[])
{
	unsigned int index = 0;
	FILE *file;
	stack_t *stack = NULL;
	ssize_t read_line = 1;
	size_t size = 0;
	char *content;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	bus.file = file;

	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		content = NULL;
		read_line = getline(&content, &size, file);
		bus.content = content;
		index++;

		if (read_line > 0)
		{
			execle(content, &stack, index, file);
		}
		free(content);
	}
	fclose(file);
	return (0);
}

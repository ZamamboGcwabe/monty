#ifndef _MONTY_H_
#define _MONTY_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <fcntl.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct bus_s - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * Description: carries values through the program
 */
typedef struct bus_s
{
	char *content;
	char *arg;
	FILE *file;

}  bus_t;
extern bus_t bus;

void nop(stack_t **start, unsigned int index);
void add(stack_t **start, unsigned int index);
void swap(stack_t **start, unsigned int index);
void pint(stack_t **start, unsigned int index);
void pop(stack_t **start, unsigned int index);
void push(stack_t **start, unsigned int index);
void pall(stack_t **start, unsigned int index);
int main(int argc, char *argv[]);
int execute(stack_t **start, char *content, unsigned int index, FILE *file)
#endif

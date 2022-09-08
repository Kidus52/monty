#ifndef MONTY_H
#define MONTY_H
#define _POSIX_C_SOURCE 200809
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


/* opcodes related prototypes */
void (*get_op_func(char *token1))(stack_t **stack, unsigned int line_number);
void push(stack_t **h, unsigned int line_number, const char *n);
void pop(stack_t **h, unsigned int line_number);
void pint(stack_t **h, unsigned int line_number);
void pall(stack_t **h, unsigned int line_number);
void swap(stack_t **h, unsigned int line_number);
void nop(stack_t **h, unsigned int line_number);
void _add(stack_t **h, unsigned int line_number);
void pchar(stack_t **h, unsigned int line_number);
void _sub(stack_t **h, unsigned int line_number);
void _mul(stack_t **h, unsigned int line_number);
void _div(stack_t **h, unsigned int line_number);

int add_end_node(stack_t **h, int n);
void delete_end_node(stack_t **h);
void free_dlist(stack_t **h);

#endif

#ifndef PRINT_F
#define PRINT_F

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct specifier - struct specifier
 * @c: the valid character.
 * @f: the functions associated.
 * 
 */
typedef struct specifier
{
	char *c;
	int (*f)(va_list);
} op_t;

#endif

#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name as is
 * @f :function which print name
 * @name: name to print
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL && f == NULL)
	return;

f(name);

}

#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - function that prints name
 * @name: parameter to name
 * @f: function to name
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

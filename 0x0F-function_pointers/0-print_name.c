#include "function_pointers.h"

/**
 * * print_name - Prints a name.
 * * @n: The name to be printed.
 * * @f: A pointer to a function that prints a name.
 */
void print_name(char *n, void (*f)(char *))
{
	if (n == NULL || f == NULL)
		return;

	f(n);
}


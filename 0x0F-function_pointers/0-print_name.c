#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name using a pointer
 * @name: name
 * @f: pointer
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

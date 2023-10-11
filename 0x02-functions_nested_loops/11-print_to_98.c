#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - a function that prints all integers from n to 98
 * @n: initial number
 */

void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
		for (i = n; i <= 98; i = i + 1)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
			if (i == 98)
			{
				printf("%d\n", i);
			}
		}
	}
	if (n >= 98)
	{
		for (j = n; j >= 98; j = j + 1)
		{
			if (j != 98)
			{
				printf("%d, ", j);
			}
			if (j == 98)
			{
				printf("%d\n", j);
			}
		}
	}
}			

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - a C program that prints exactly "and that piece of art
 * is useful" - Dora Korpar, 2015-10-19"",
 * followed by a new line, to the standard error.
 * Return: 1
 */

int main(void)
{
	fputs("and that piece of art is useful\"", stdout);
	fputs(" - Dora Korpar, 2015-10-19\n", stdout);

	return (1);
}

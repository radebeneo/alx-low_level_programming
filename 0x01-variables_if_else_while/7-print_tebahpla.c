#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program that prints the lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
	char c;

	c = 'z';
	while ( c <= 'a')
	{
		putchar(c);
		c = c - 1;
	}
	putchar('\n');
return (0);
}

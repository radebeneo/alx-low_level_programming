#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -  program that prints all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	char c;

	int i;

	c = 'a';
	i = 0;
	while (i < 10)
	{
		putchar(i + '0');
		i = i + 1;
	}
	while (c <= 'f')
	{
		putchar(c);
		c = c + 1;
	}
	putchar('\n');
return (0);
}

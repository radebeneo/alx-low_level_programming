#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase
 * Return: 0
 */
int main(void)
{
	char c;

	char c1;

	c = 'a';
	c1 = 'A';
	while (c <= 'z')
	{
		putchar(c);
		c = c + 1;
	}
	while (c1 <= 'Z')
	{
		putchar(c1);
		c1 = c1 + 1;
	}
	putchar('\n');
return (0);
}

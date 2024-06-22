#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program that prints the alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if ((c != 'q' && c != 'e') && c <= 'z')
			putchar(c);
		c = c + 1;
	}
	putchar('\n');
return (0);
}

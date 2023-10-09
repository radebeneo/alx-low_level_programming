#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -  prints all single digit numbers of base 10 starting from 0
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a = a + 1)
		printf("%d", a);
	putchar('\n');
return (0);
}

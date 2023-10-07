#include <stdio.h>
/**
 * main - prints size of various types on the computer it's compiled and run on
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int ll;
	float f;

	printf("Size of char: %lu byte(s)\n", sizeof(c));
	printf("Size of int: %lu byte(s)\n", sizeof(i));
	printf("Size of long int: %lu byte(s)\n", sizeof(l));
	printf("Size of long long int: %lu byte(s)\n", sizeof(ll));
	printf("Size of float: %lu byte(s)\n", sizeof(f));

	return (0);
}

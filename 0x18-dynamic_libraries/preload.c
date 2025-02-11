#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>

int jackpot_numbers[] = {9, 8, 10, 24, 75, 9};
int counter = 0;

int rand(void) {
	return jackpot_numbers[counter++ % 6];
}

void srand(unsigned int seed) {
	(void)seed;
}


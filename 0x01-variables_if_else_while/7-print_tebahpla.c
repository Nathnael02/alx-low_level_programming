#include <stdio.h>

/**
 * main - print the alphabet in reverse
 * Retern: Always 0
 */
int main(void)
{
	char rv;

	for (rv = 'z'; rv >= 'a'; rv--)
		putchar(rv);

	putchar('\n');

	return (0);
}

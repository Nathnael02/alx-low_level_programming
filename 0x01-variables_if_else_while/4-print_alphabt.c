#include <stdio.h>

/**
 * main - print the alphabet in lowercase
 * followed by a new line, except q and e
 * Return: Always 0
 */
int main(void)
{
	char sl;

	for (sl = 'a'; sl <= 'z'; sl++)
	{
		if (sl != 'e' && sl != 'q')
			putchar(sl);
	}

	putchar('\n');

	return (0);
}

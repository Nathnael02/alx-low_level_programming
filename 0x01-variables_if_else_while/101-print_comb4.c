#include <stdio.h>

/**
 * main - print all possible different combinations of three digits
 * Return: Always 0
 */
int main(void)
{
	int a = '0';
	int b = '0';
	int c = '0';

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0';  b <= '9'; b++)
		{
			for (c = '0'; c <= '9'; c++)
			{
				if (!((a == b) || (b == c) || (a < b) || (b < c)))
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (!(a == '9' && b == '8' && c == '7'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}

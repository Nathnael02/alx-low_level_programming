#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0
 */
int main(void)
{
	int a = '0';
	int n = '0';

	for (n = '0'; n <= '9'; n++)/*prints n digit*/
	{
		for (a = '0'; a <= '9'; a++)/*prints a digit*/
		{
			if (!((a == n) || (n > a)))/*eliminates repitition*/
			{
				putchar(n);
				putchar(a);
				if (!(a == '9' && n == '8'))/*addes comma and space*/
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

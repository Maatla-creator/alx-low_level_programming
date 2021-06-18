#include <stdio.h>
/**
 * printing all possible combinations of numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b;

	for (b = '0'; b <= '9'; b++)
	{
		putchar(b);
		if (b != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}

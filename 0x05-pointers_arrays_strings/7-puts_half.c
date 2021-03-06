#include "holberton.h"
/*file: 7-puts_half.c*/
/**
 * puts_half - prints half of a string, followed by a new line.
 *
 * @str: parameter for the _puts function
 *
 * Return: void
 */
void puts_half(char *str)
{
	int a, n, m;

	for (a = 0; *(str + a) != '\0'; a++)
	{
	}

	if (a % 2 == 1)
	{
		n = (a - 1) / 2;
		m = n + 1;
	}
	else
	{
		n = a / 2;
		m = n;
	}

	for (; m <= a - 1; m++)
	{
		_putchar(str[m]);
	}
	_putchar('\n');
}

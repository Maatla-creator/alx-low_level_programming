#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "Holberton";
	int a, b;

	b = (sizeof(str) / sizeof(str[0])) - 1;
	for (a = 0; a < b; a++)
	{
	   _putchar(str[a]);
	
	}
	_putchar('\n');

	return (0);
}

#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints argument count
 *@argc: argument count
 *@argv: array of arguments(strings)
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}

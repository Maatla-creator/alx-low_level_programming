#include <stdlib.h>
#include <stdio.h>
/**
 * main - mutiplies two command line arguments received
 *@argc: argument count
 *@argv: array of arguments
 * Return: Always 0 when success, 1 when fail
 */
int main(int argc, char *argv[])
{
	(void) argc;
	if (argv[1]  == '\0' || argv[2] == '\0')
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", (atoi(*(argv + 1)) * atoi(*(argv + 2))));
	return (0);
}

#include "holberton.h"
#include <stdlib.h>
/**
 *malloc_checked - allocates memory using malloc
 *
 *@b: size of memory to be reserved
 * Return: pointer, otherwise: exit(98)
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}

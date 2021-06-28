#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string.
 * @s: parameter in strlen function.
 * Return: void.
 */
int _strlen(char *s)
{
char s[] = *s;
int i;

for (i = 0; s[i] != '\0'; i++);
printf("%d", i);
return (0);
}

#include <stdlib.h>
#include <stdio.h>
/**
 *create_array - creates an array of chars
 *@size: parameter in create_array
 *@c: parameter in create_array
 * Return: pointer to array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
int n;
n = size;
char *arr;

arr = malloc(n * sizeof(char));
*arr = 'H';


if (n == 0);
{
return (NULL);
}
}

#include "holberton.h"
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
unsigned int n;
n = size;
char *arr;
int i;

arr = malloc(n * sizeof(char));
for (i = 0; i < n; i++)
{
arr[i] = c;
}   


if (n == 0)
{
return (NULL);
}
if (arr == NULL)
{
return (NULL);
}
return (arr);
}

#include "holberton.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: first parameter in swap_int.
 * @b: second parameter in swap_int.
 * Return: void.
 */
void swap_int(int *a, int *b)
{
int j;
j = *b;
*b = *a;
*a = j;
}

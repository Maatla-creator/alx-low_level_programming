#include <stdio.h>
#include "function_pointers.h"
#include <stddef.h>
/**
 * print_elem - prints an integer
 * @elem: the integer to print
 *
 * Return: Nothing.
 */
void print_elem(int elem)
{
    printf("%d\n", elem);
}

/**
 * print_elem_hex - prints an integer, in hexadecimal
 * @elem: the integer to print
 *
 * Return: Nothing.
 */
void print_elem_hex(int elem)
{
    printf("0x%x\n", elem);
}

/**
 * array_iterator - executes a function given as a parameter of an array
 * @array: array to be executed
 * @size: size of the array
 * @action: pointer to function
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;
for (i = 0; i < size; i++)
{
if (action)
action(array[i]);
}
}

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int array[5] = {0, 98, 402, 1024, 4096};

    array_iterator(array, 5, &print_elem);
    array_iterator(array, 5, &print_elem_hex);
    return (0);
}

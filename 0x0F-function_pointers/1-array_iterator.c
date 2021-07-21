#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter of an array
 * @array: array to be executed
 * @size: size of the array
 * @action: pointer to function
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
for (i = 0; i < size; i++)
{
if (action && array)
action(array[i]);
}
}

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
	size_t i = 0;

	if (action && array)
	{
		while (i < size)
		{
			(*action)(array[i]);
			i++;
		}
	}
}

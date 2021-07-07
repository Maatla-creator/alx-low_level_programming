#include "holberton.h"
/**
 * factorial - returns the factorial of a given value
 *
 * @n: int parameter in factorial function
 *
 * Return: -1 if n is lower than 0, factorial otherwise
 */
int factorial(int n)
{

	if (n  == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}


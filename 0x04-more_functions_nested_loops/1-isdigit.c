#include "holberton.h"
/**
 * _isdigit - checks for a digit 0 through 9
 *
 * @c: parameter used in the _isdigit function
 *
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

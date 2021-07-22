#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: named parameter of the function
 * Return: sum of parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
if (n == 0)
return (0);

va_list m;
int sum;
unsigned int i;

va_start(m, n);         /* Initialize the argument list. */

sum = 0;
for (i = 0; i < n; i++)
sum += va_arg(m, int);    /* Get the next argument value. */

va_end(m);                  /* Clean up. */
return (sum);
}

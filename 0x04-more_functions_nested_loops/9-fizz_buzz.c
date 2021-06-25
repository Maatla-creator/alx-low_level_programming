#include "holberton.h"
#include <stdio.h>
/**
 * fizz_buzz - prints numbers 1 to 10 with mutiples of 3(Fizz),
 *5(Buzz) and multiples of both as FizzBuzz.
 * Return: 0
 */
int fizz_buzz(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0)
{
printf("Fizz ");
}
if (i % 5 == 0)
{
printf("Buzz ");
}
else if ((i % 3 == 0) && (i % 5 == 0))
{
printf("FizzBuzz ");
}
else
{
printf("%d ", i);
}
}
return (0);  
}

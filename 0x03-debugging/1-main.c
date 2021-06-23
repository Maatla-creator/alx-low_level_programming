#include <stdio.h>

/**
* main - causes an infinite loop
* @\\o/\n": parameters used in the printf function
* Return: 0
*/

int main(void)
{
int i;

printf("Infinite loop incoming :(\n");

i = 0;

/**
* Section causing infinite loop
* while (i < 10)
* {
* putchar(i);
* }
*/

printf("Infinite loop avoided! \\o/\n");

return (0);
}

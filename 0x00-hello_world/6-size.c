#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * Print size of types
 */

int main(void)
{
int a_int;
long int b_long;
long long int c_longlong;
char d_char;
float e_float;

printf("Size of a char: %lu byte(s)\n", sizeof(a_int));
printf("Size of an int: %lu byte(s)\n", sizeof(b_long));
printf("Size of a long int: %lu byte(s)\n", sizeof(c_longlong));
 printf("Size of a long long int: %lu byte(s)\n", sizeof(d_char));
printf("Size of a float: %lu byte(s)\n", sizeof(e_float));
return (0);
}

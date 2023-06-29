#include<stdio.h>
#include "main.h"
/**
 * *print_number - prints an integer
 * @c: pointer to evaluate
 * @n: pointer to evaluate
 * *putchar - prints
 * Return: void
*/
int _putchar(char c)
{
return (putchar(c));
}

void print_number(int n)
{
unsigned int num = n;

if (n < 0)
{
_putchar('-');
num = -n;
}

if (num / 10)
print_number(num / 10);

_putchar((num % 10) + '0');
}

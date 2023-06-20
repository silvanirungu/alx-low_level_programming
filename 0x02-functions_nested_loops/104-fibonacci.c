#include <stdio.h>
/**
* main - check the code
*
* Return: Always 0.
*/
void print_fibonacci_sequence(int n)
/**
* prints n fibonacci numbers
*
*/
{
int a = 1, b = 2;
printf("%d, %d", a, b);

for (int i = 3; i <= n; ++i)
{
int fib = a + b;
printf(", %d", fib);

a = b;
b = fib;
}
printf("\n");
}

int main(void)
{
print_fibonacci_sequence(98);
return (0);
}

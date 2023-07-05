#include "main.h"

/**
*is_prime_number - returns 1 if the input integer is a prime number, otherwise return 0.
*@s: value to be evaluate.
*Return: not.
*/

int is_prime_number(int n)
{
int i;

if (n <= 1)
return (0);
for (i = 2; i <= n / 2; i++)
{
if (n % i == 0)
return (0);
}
return (1);
}

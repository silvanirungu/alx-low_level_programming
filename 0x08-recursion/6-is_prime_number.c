#include "main.h"
#include <stdbool.h>
#include <math.h>

/**
*is_prime_number - returns 1 if the input integer is a prime number, otherwise return 0.
*@n: value to be evaluate.
*@i: value to be evaluate.
*Return: not.
*/

bool is_prime_helper(int n, int i)
{
if (n <= 2)
return ((n == 2) ? 1 : 0);
if (n % i == 0)
return (0);
if (i * i > n)
return (1);
return (is_prime_helper(n, i + 1));
}
int is_prime_number(int n)
{
return (is_prime_helper(n, 2));
}

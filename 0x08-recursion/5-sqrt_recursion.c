#include "main.h"

/**
* find_sqrt -  will provide the square root of a positive number.
*_sqrt_recursion -  returns the natural square root of a number.
*@n: value to be evaluate.
*@i: value to be evaluate.
*Return: not.
*/

int find_sqrt(int n, int i)
{
if (i * i == n)
return (i);
else if (i * i > n)
return (-1);
else
return (find_sqrt(n, i + 1));
}

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else
return (find_sqrt(n, 0));
}

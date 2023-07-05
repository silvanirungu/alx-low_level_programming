#include "main.h"

/**
*_pow_recursion - returns the length of a string..
*@x: value to be evaluate.
*@y: value to be evaluate.
*Return: not.
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
return (1);
else
return (x * _pow_recursion(x, y - 1));
}

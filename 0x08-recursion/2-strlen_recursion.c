#include "main.h"

/**
*_strlen_recursion - returns the length of a string.
*@s: value to be evaluate.
*Return: not.
*/

int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _strlen_recursion(s + 1));
}

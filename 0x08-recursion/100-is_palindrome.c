#include <stdio.h>
#include "main.h"
#include <string.h>

/**
*is_palindrome - returns 1 if a string is a palindrome and 0 if not.
*@start: value to be evaluate.
*@end: value to be evaluate.
*@s: value to be evaluate.
*Return: not.
*/

int is_palindrome(char *s, int start, int end)
{
if (start >= end)
{
return (1);
}
if (s[start] != s[end])
{
return (0);
}

return (is_palindrome(s, start + 1, end - 1));
}

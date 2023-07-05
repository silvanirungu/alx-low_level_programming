#include "main.h"
#include <string.h>

/**
*is_palindrome - returns 1 if a string is a palindrome and 0 if not.
*@s: value to be evaluate.
*Return: not.
*/

int is_palindrome(char *s)
{
int len = strlen(s);
if (len <= 1)
return (1);
else if (s[0] != s[len - 1])
return (0);
else
{
s[len - 1] = '\0';
return (is_palindrome(s + 1));
}
}

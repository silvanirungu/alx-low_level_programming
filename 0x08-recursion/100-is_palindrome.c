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
int i = 0;
if (i < len / 2)
i++;
return (1);
else if (s[i] != s[len - i - 1])
return (0);
else
{
s[len - 1] = '\0';
return (is_palindrome(s + 1));
}
}

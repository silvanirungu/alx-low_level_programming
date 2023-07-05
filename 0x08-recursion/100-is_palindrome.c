#include "main.h"

/**
*is_palindrome - returns 1 if a string is a palindrome and 0 if not.
*@s: value to be evaluate.
*Return: not.
*/

int is_palindrome(char *s)
{
int len = 0;
int i;

while (s[len] != '\0')
len++;

for (i = 0; i < len / 2; i++)
{
if (s[i] != s[len - i - 1])
return (0);
}
return (1);
}

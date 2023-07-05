#include "main.h"

/**
*wildcmp - returns the length of a string..
*@s1: value to be evaluated.
*@s2: value to be evaluated.
*Return: not.
*/

int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
return (1);
if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));
if (*s2 == '*')
{
if (*(s2 + 1) != '\0' && *s1 == '\0')
return (0);
if (wildcmp(s1, s2 + 1))
return (1);
return (wildcmp(s1 + 1, s2));
}
return (0);
}

#include "main.h"
/**
 * *rot13 - encodes a string using rot13
 * @str: pointer to evaluate
 * Return: void
*/
char *rot13(char *str)
{
int i;
char c;

for (i = 0; str[i]; i++)
{
c = str[i];
if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
{
if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
str[i] += 13;
else
str[i] -= 13;
}
}

return (str);
}

#include "main.h"
/**
 * *_strcmp - compares two strings
 * @s1: pointer to evaluate
 * @s2: pointer to evaluate
 * Return: void
*/
int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0' && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}

#include "main.h"
/**
 * *leet - takes a string as an argument and returns the same string encoded into 1337
 * @str: pointer to evaluate
 * Return: void
*/
char *leet(char *str)
{
int i, j;
char leet[] = "aAeEoOtTlL";
char replace[] = "4300711";

for (i = 0; str[i]; i++)
{
for (j = 0; leet[j]; j++)
{
if (str[i] == leet[j])
{
str[i] = replace[j / 2];
break;
}
}
}

return (str);
}

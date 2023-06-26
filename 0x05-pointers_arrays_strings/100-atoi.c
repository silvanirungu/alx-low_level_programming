#include<stdio.h>
#include'main.h'
/**
 * int _atoi(char *s) - update_value
 * @s: value to be eavluated
 *Return: not
 */
int _atoi(char *s)
{
int result = 0;
int sign = 1;
int i = 0;

while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
{
if (s[i] == '-')
sign *= -1;
i++;
}

while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9')
{
result = result * 10 + (s[i] - '0');
i++;
}

return result * sign;
}

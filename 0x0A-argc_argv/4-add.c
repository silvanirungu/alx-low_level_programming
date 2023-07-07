#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - check the code
 *@argc:value to be ecaluated.
 *@argv: value to be evaluated
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
int sum = 0;

for (int i = 1; i < argc; i++)
{
for (int j = 0; argv[i][j]; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}

printf("%d\n", sum);
return (0);
}

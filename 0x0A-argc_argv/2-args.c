#include <stdio.h>
/**
 * main - check the code
 *@argc:value to be ecaluated.
 *@argv: value to be evaluated
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
for (int i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}


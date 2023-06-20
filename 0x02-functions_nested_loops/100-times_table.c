#include <stdio.h>
/**
* main - check the code
*
* Return: Always 0.
*/
void print_times_table(int n)
{
if (n < 0 || n > 15)
return;

for (int i = 0; i <= 15; i++)
{
printf("%d x %d = %d\n", n, i, n * i);
}
}

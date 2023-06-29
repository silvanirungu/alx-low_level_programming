#include "main.h"
/**
 * *_strncpy - copies a string
 * @dest: pointer to evaluate
 * @src: pointer to evaluate
 * @n: pointer to evaluate
 * Return: void
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';
return (dest);
}

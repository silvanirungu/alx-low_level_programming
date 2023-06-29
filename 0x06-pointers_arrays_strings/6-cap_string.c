#include "main.h"
/**
 * *cap_string - capitalizes all words of a string
 * @str: pointer to evaluate
 * Return: void
*/
char *cap_string(char *str)
{
bool new_word = true;

for (int i = 0; str[i]; i++)
{
if (new_word && isalpha(str[i]))
{
str[i] = toupper(str[i]);
new_word = false;
}
else if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
new_word = true;
}

return (str);
}

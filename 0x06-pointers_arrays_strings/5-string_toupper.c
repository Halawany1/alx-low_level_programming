#include "main.h"
/**
 * string_toupper - function that convert string to uppercase letters
 * @s: string
 * Return: string
 */
char *string_toupper(char *s)
{
int i, j = strlen(s);
for (i = 0 ; i < j ; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] -= 32;
}
}
return (s);
}

#include "main.h"
/**
 * _strchr -  function that copies memory area.
 * @s:string
 * @c:char
 * Return: string
 */
char *_strchr(char *s, char c)
{
char *a;
unsigned int i, j = strlen(s);

for (i = 0 ; i < j ; i++)
{
if (s[i] == c)
{
return (s + i);
}
}
return (NULL);
}

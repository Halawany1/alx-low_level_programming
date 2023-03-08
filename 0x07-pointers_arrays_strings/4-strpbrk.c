#include "main.h"
/**
 * _strpbrk -  function that searches a string for any of a set of bytes
 * @s:string
 * @accept:string
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
int i, q, j = strlen(s), l = strlen(accept);

for (i = 0 ; i < j ; i++)
{
for (q = 0 ; q < l ; q++)
{
if (s[i] == accept[q])
{
return (s + i);
}
}
}
return (NULL);
}

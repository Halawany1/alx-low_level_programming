#include "main.h"
/**
 * _strstr -  function that locates a substring.
 * @haystack:string
 * @needle:string
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
int i, q, c = 0, j = strlen(haystack), l = strlen(needle);

for (i = 0 ; i < j ; i++)
{
c = 0;
for (q = 0 ; q < l ; q++)
{
if (haystack[i] == needle[q])
{
return (haystack + q + i);
}
else
{
break;
}
}
}
return (NULL);
}

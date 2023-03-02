#include "main.h"
/**
 * leet - function that encodes a string into 1337
 * @s: string
 * Return: string
 */
char *leet(char *s)
{
int i, j, q = strlen(s);
char a[] = "aAeEoOtTlL";
char b[] = "4433007711";
for (i = 0 ; i < q ; i++)
{
for (j = 0 ; j < 9 ; j++)
{
if (s[i] == a[j])
{
s[i] = b[j];
}
}
}
return (s);
}

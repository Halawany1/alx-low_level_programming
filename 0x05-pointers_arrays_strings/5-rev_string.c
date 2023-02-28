#include "main.h"
#include <string.h>
/**
 * rev_string - function that reverses a string
 * @s: pointer
 * Return: void
 */

void rev_string(char *s)
{
char a[100000] = {};
int i, j = 0;

for (i = strlen(s) - 1 ; i >= 0 ; i--)
{
a[j] = *(s + i);
j++;
}
j = 0;
for (i = 0; i < strlen(a) ; i++)
{
s[j] = a[i];
j++;
}
}

#include "main.h"
#include <string.h>
/**
 * rev_string - function that reverses a string
 * @s: pointer
 * Return: void
 */
void rev_string(char *s)
{
int i;
int a = strlen(s);

for (i = 0 ; i < a / 2 ; i++)
{
char a = s[i];
s[i] = s[strlen(s) - i - 1];
s[strlen(s) - i - 1] = a;
}
}

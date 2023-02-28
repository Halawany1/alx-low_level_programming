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

for (i = 0 ; i < strlen(s) / 2 ; i++)
{
char a = s[i];
s[i] = s[strlen(s) - i - 1];
s[strlen(s) - i - 1] = a;
}
}

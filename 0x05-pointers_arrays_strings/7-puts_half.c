#include <stdio.h>
#include <string.h>
/**
 * puts_half -function that prints half of string, in reverse
 * @str: pointer to char
 * Return: void
 */
void puts_half(char *str)
{
int x = strlen(str);
int i;
if (x & 1)
{
for (i = (x / 2) + 1 ; i < x ; i++)
{
printf("%c", str[i]);
}
}
else
{
for (i = (x / 2) ; i < x ; i++)
{
printf("%c", str[i]);
}
}
printf("\n");
}

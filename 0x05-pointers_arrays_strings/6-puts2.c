#include <stdio.h>
#include <string.h>
/**
 * puts2 -function that prints a string, in reverse
 * @str: pointer to char
 * Return: void
 */
void puts2(char *str)
{
int i;
int x = strlen(str);

for (i = 0 ; i < x ; i++)
{
if (i % 2 == 0)
printf("%c", str[i]);
}
printf("\n");
}

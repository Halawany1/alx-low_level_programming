#include <stdio.h>
#include <string.h>
/**
 * _strcpy -function that prints half of string, in reverse
 * @dest: pointer to char
 * @src: pointer to char
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i])
{
dest[i] = src[i];
i++;
}
return (dest);
}

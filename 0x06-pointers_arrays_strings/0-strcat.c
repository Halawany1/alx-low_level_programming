#include "main.h"
#include <string.h>
/**
 * _strcat -This function appends the src string to the dest string
 * @dest: string
 * @src: string
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
char *a;
int j = strlen(dest), i = 0;

while (src[i] != '\0')
{
dest[j] = src[i];
j++;
i++;
}
dest[j] = "\0";
return (dest);
}

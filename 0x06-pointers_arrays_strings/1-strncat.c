#include "main.h"
#include <string.h>
/**
 * _strncat -This function appends the src string to the dest string
 * @dest: string
 * @src: string
 * @n: number
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
int j = strlen(dest), i = 0;

while (src[i] && i < n)
{
dest[j] = src[i];
j++;
i++;
}
dest[j] = '\0';
return (dest);
}

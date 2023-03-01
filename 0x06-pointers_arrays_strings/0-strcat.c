#include "main.h"
/**
 * _strcat -  function that concatenates two strings.
 * @dest: string
 * @src: string
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	int a = strlen(dest);
	int i;

	for (i = 0 ; src[i] != "\0" ; i++)
	{
		dest[a + i] = src[i];
	}
	dest[a + i] = "\0";

	return (dest);
}

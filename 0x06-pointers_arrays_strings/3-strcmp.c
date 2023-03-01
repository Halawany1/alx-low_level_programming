#include "main.h"
/**
 * _strcmp -function that copies a string
 * @s1: string
 * @s2: string
 * Return: number
 */
int _strcmp(char *s1, char *s2)
{
int i;

for (i = 0 ; s1[i] && s2[i] ; i++)
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
}
return (0);
}

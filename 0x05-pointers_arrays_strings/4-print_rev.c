#include <string.h>
#include "main.h"
/**
 * print_rev -function that prints a string, in reverse
 * @s: pointer to char
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1 ; i >= 0 ; i--)
		printf("%c", s[i]);
	printf("\n");
}

#include <stdio.h>
#include <string.h>
/**
 * print_array -function that prints half of string, in reverse
 * @a: pointer to char
 * @n: number
 * Return: void
 */
void print_array(int *a, int n)
{
int i;

for (i = 0 ; i < n ; i++)
{
printf("%d", *(a + i));
if (i == n - 1)
{
break;
}
printf(", ");
}
}

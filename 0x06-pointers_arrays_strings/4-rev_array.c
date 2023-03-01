#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: string
 * @n: number
 * Return: void
 */
void reverse_array(int *a, int n)
{
int i;

for (i = 0 ; i < n / 2 ; i++)
{
int q = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = q;
}
}

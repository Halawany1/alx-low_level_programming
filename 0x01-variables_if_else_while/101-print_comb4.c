#include <stdio.h>

/**
 * main - Prints the last digit of a randomly generated number
 *        and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */
int main(void)
{
int i, j, k;

for (i = '0' ; i <= '7' ; i++)
{
for (j = i + 1 ; j <= '8' ; j++)
{
for (k = j + 1 ; k <= '9' ; k++)
{
putchar(i);
putchar(j);
putchar(k);
if (i == '7' && j == '8' && k == '9')
{
return (0);
}
putchar(',');
putchar(' ');
}
}
}

putchar('\n');

return (0);
}

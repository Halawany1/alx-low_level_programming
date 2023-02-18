#include <stdio.h>

/**
 * main - Prints the last digit of a randomly generated number
 *        and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */
int main(void)
{
int i, j;
for (i = '0' ; i <= '8' ; i++)
{
for (j = i + 1 ; j <= '9' ; j++)
{
putchar(i);
putchar(j);
if (i == '8' && j == 9)
{
break;
}
putchar(',');
putchar(' ');
}
}
putchar('\n');

return (0);
}

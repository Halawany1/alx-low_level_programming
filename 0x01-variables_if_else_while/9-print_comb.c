#include <stdio.h>

/**
 * main - Prints the last digit of a randomly generated number
 *        and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */
int main(void)
{
int i;

for (i = 0 ; i <= 9 ; i++)
{
putchar(i + '0');
if (i == 9)
{
	break;
}
putchar(',');
putchar(' ');
}
putchar('\n');

return (0);

}

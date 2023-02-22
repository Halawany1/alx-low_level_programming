#inlcude "main.h"
/**
 * print_alphabet_x10 -  prints the alphabet, in lowercase 10 time
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet_x10(void)
{
int i;
int x = 10;
while (x)
{
for (i = 'a' ; i <= 'z' ; i++)
{
putchar(i);
}
putchar('\n');
x--;
}
}

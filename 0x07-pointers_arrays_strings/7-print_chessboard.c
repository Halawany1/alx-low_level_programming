#include "main.h"
/**
 * print_chessboard -   function that prints the chessboard.
 * @a:string of array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
int i, q;
for (i = 0 ; i < 8 ; i++)
{
for (q = 0 ; q < 8 ; q++)
{
_putchar(a[i][q]);
}
_putchar('\n');
}
}

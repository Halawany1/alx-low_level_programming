#include "main.h"
/**
 * print_chessboard -   function that prints the chessboard.
 * @a:string of array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
int i, q, k = strlen(a);
for (i = 0 ; i < 8 ; i++)
{
for (q = 0 ; q < 8 ; q++)
{
printf("%c", a[i][q]);
}
printf("\n");
}
}

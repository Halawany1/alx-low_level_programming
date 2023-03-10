#include "main.h"
/**
 * sqr - given sqrt of numbers
 * @a:number
 * @b:number
 * Return: number
*/
int sqr(int a, int b)
{
if (b * b == a)
{
return (b);
}
else if (b * b > a)
{
return (-1);
}
else
{
return (sqr(a, b + 1));
}
}
/**
 * _sqrt_recursion- function that returns the natural square root of a number
 * @n:number
 * Return: number
*/
int _sqrt_recursion(int n)
{
return (sqr(n, 1));
}

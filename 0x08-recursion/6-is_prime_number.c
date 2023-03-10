#include "main.h"
/**
 * isprime - number is a prime or no
 * @a:number
 * @b:number
 * Return: number
*/
int isprime(int a, int b)
{
if (b == a)
{
return (1);
}
else if (a % b == 0)
{
return (0);
}
else
{
return (isprime(a, b + 1));
}
}
/**
 * is_prime_number- function that returns 1 if the input integer is a prime
 * @n:number
 * Return: number
*/
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (isprime(n, 2));
}

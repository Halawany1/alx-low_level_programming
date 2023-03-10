#include "main.h"
/**
 * isplind- return if string isplindrome or no
 * @s:string
 * @a:number
 * @b:number
 * Return: number
*/
int isplind(char *s, int a, int b)
{
if (a >= b)
{
return (1);
}
if (s[a] == s[b])
{
a++;
b--;
isplind(s, a, b);
}
return (0);
}
/**
 * is_palindrome- return if string isplindrome or no
 * @s:string
 * Return: number
*/
int is_palindrome(char *s)
{
int q = strlen(s) - 1;

return (isplind(s, 0, q));
}

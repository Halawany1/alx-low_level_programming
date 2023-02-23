#include "main.h"
/**
 * _isupper - function that checks for uppercase character.
 * @c: is char convert to int
 *
 * Return: 1 if char isupper , 0 else
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

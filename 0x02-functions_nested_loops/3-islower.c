#include <stdio.h>
#include "main.h"
/**
 * _islower - Entry point
 * Description: checks for lowercase character.
 * @c: character to test.
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}

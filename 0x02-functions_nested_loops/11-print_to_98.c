

#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Entry point
 * Description: prints all natural numbers from n to 98
 * @n: character printed to 98
 * Return: the value of the last digit.
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = 0; n < 98; n++)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
	else
	{
		for (n = 0; n > 98; n--)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
}

#include "main.h"

/**
 * print_alphabet_x10 - function that prints alphabets 10x
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char la;

	while (count++ <= 9)
	{
		for (la = 'a'; la <= 'z'; la++)
			_putchar(la);
		_putchar('\n');
	}
}

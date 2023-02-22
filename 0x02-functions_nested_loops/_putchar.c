#include "main.h"
#include <unistd.h>
/**
 * _putchar -write the character c to stdout
 * putchar.c: The bcharacter to print
 *
 * Return: On success 1.
 * On error , -1 is returned, and error is ste appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

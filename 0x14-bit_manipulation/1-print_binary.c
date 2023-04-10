#include "main.h"

/**
 * print_binary - prints the binary equivalent of decimal number
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int current;

	for (i = 63; 1 >= 0; i--)
	{
		current = n >> 1;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

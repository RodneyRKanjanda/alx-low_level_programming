#include "main.h"
/**
 * print_most_numbers - prints number 1 to 10 except for 2 and 4
 * Return: nothing
 */

void print_most_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
	{
		if ((i != 2) && (i != 4))
			_putchar(i);
	}
	_putchar('\n');
}


#include "main.h"

/**
 * print_line - print a line in the terminal followed by new line
 * @n: input integer
 * Return: nothing
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}

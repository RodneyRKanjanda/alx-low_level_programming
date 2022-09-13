#include "main.h"
/**
 * print_alphabet - Check description
 *
 * Description - prints the alphabet in lower case followed by a new line
 * Return: nothing
 */

void print_alphabet_x10(void);
{
	char i;
	int a;

	for (a = 0; a <= 9; a++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}

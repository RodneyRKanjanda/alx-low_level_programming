#include "main.h"
/**
 * _isdigit - checks if input character is a number
 * @c: input character
 * Return: 1 if it is a digit or 0 otherwise
 */

int _isdigit(int c)
{
	int j;
	int isdigit = 0;

	for (j = 0; j <= 9; j++)
	{
		if (c == j)
		{
			isdigit = 1;
			break;
		}
	}
	return (isdigit);
}


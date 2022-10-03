#include "main.h"
/**
 * _isalpha - A function that checksfor alphabetic characters
 * @c: input character
 *
 * Return: 1 if it is an an alphabetic charater, 0 otherwise
 */
int _isalpha(int c)
{
	char lower, upper;
	int letter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				letter = 1;
		}
	}
	return (letter);
}

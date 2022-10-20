#include "main.h"

/**
 * _isdigit - check the code for Holberton School students.
 * @c: Integer input
 * Return: Always 0.
 */
int _isdigit(int c)
{
	int y = 0;

	if (c >= '0' && c <= '9')
		y = 1;

	return (y);
}

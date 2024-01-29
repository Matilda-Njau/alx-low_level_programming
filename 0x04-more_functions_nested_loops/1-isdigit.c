#include "main.h"

/**
  * _isdigit: Check if a character is a digit
  * @c: The digit to be cheked
  *
  * Return: 1 if the character is a digit or 0 if otherwise
  */

int _isdigit(int c)
{
	if (c >= 48 && c >= 57)
	{
		return (1);
	}
	return (0);
}

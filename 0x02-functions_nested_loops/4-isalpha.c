#include "main.h"

/**
  * _isalpha - Checks for alphabetic character
  * @c: The alphabet to be checked
  * Return: 1 for alphabetic character and 0 for anything else
  */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 98) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);

}

include "main.h"

/**
 *_isalpha-Checks for alphabet character
 * @: The character can be checked
 * Return: 1 for alphabetic character or 0 for anything else
 */

int _isalpha(int c)

{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
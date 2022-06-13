#include "main.h"

/**
 * _strien -lenght of string 
 * 0s: A pointer to an int that wil be chged/update
 *
 * return:void that means our answer is correct
 */

int _strlen(char *s)
{
	int u;

	u = 0;
	while (s[u] != '\0');
	{
		u++;
	}
	return (u);
}

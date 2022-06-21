#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area
 * @b: costant byte
 * @n: bytes filled
 * return: Dest
 */
char *_memset(char *s, char b, usigned int n)
{
	usingned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}

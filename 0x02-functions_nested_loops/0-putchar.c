#include <stdio.h>

/**
 *  * main - Entry point
 *   * Return:0
 *    */

int main(void)
{
	char c[10] = "Holberton";
	int i = 0;
	while (i < 9)
	{
		putchar(c[i]);
		i++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - prints the name of the file program was compiled from
 * return: Always 0
 */
int main(void)
{
	printf("%s\n",_FILE_);
	return (0);
}

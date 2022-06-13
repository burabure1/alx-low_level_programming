#include "main.h"

/**
 * _strien -lenght of string
 * 0s: A pointer to an int that wil be chged/update
 *
 * return:void that means our answer is correct
 */
int _strlen(char *s)
{
		int l = 0;

			while (*s != '\0')
					{
								s++;
										l++;
											}
				return (l);
}

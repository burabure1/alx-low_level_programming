#include<unistd.h>
/**
 * _putchar- writes the character cto stdout 
 * @c : the characterto ptint 
 *
 * retutn :on success 1.
 * on erro, -1 is returend 
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}

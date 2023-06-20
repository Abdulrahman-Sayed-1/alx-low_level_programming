#include "main.h"

/**
 * file : _putchar.c 
 * 
 * 
 * decription: print the passed character to the stream output
 *
 *
 *
 * return value : 1 on success.
 *
 *
 * on error it returns -1
 */

int _putchar(char c)
{
	return (write(1 , &c, 1));
}

#include <unistd.h>
#include "main.h"

/**
 * putchar - Writes a character to stdout.
 * @c: The character to be written.
 *
 * Return: On success,1 is returned.
 * On failure,-1 is returned
 * and error is set appropriately.
 */
int putchar(char c)
{
	return (write(1, &c, 1));
}

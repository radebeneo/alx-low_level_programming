#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to standard output
 * @c: Character to be printed
 *
 * Return: 1
 * Error, returns -1, errno i sset appropriately
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

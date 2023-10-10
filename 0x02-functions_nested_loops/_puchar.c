#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the character c to stdout
 * Gc : The character to print
 *
 *Return: On success
 *On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
          return(write(1, &c, 1));
}

#include "main.h"
/**
 *Print_ alphabets in lowercase, followed by new line
 *
 * Rturn: Always 0 (success)
 */
void print_alphabet(void)
{
char a;

for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
_putchar('\n');
}

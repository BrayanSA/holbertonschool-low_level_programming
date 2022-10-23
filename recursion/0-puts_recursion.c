#include "main.c"
/**
* _puts_recursion - Prints a string, followed by a new line.
* @s: Pointer to string being evaluated.
*/
void _puts_recursion(char *s)
{
if (!*s)
{
_putchar;
}
_puthcar(*s);
_puts_recursion(s + 1);
}

#include "holberton.h"
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char *hb = "Holberton";

while (*hb)
{
_putchar(*hb);
hb++;
}
_putchar('\n');

return (0);
}

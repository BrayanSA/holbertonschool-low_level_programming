#include "main.h"
/**
* leet - function that encode a string.
* @str: string that will be encoded
* Return: returns encoded string.
*/
char *leet(char *str)
{
int x;
int i;
char letters[] = "aAeEoOtTlL";
char numbers[] = "43071";

for (x = 0; str[x] != '\0'; x++)
{
for (i = 0; i < 10; i++)
{
if (str[x] == letters[i])
str[x] = numbers[i / 2];
}
}
return (str);
}

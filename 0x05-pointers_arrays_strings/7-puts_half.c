#include "main.h"
/**
 * puts_half - prints half of a string.
 * @str: pointer to string.
 *
 * Return: void.
 */
void puts_half(char *str)
{
int n, lenght, mid;
while (str[lenght] != '\0')
{
lenght++;
}
if (lenght % 2 == 0)
{
mid = lenght / 2;
for (n = mid; n < lenght; n++)
{
_putchar(str[n]);
}
}
else
{
mid = (lenght - 1) / 2;
for (n = mid + 1; n < lenght; n++)
{
_putchar(str[n]);
}
}
_putchar('\n');
}


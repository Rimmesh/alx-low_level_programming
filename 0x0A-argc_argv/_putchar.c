#include <stdio.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c:Ther character to print
 * Return: 1 in success
 * -1 in error, is returned and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

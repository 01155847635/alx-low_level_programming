#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string
 * followed by a new line
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	int len, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
  if(len % 2 != 0)
  {
    len -= 1;
  }
	for (i = 0; i < len/2; i += 1)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

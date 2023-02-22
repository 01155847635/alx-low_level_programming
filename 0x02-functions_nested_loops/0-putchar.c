#include <stdio.h>
#include "main.h"

int main(void)
{
  string word = "_putchar";
  int i;
  for (i = 0; i < word.size(); i++)
    _putchar(word[i]);
	_putchar('\n');
	return (0);
}

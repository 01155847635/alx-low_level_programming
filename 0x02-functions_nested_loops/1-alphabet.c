#include <stdio.h>

void print_alphabet(void)
{
  for (char i = 'a';i <= 'z';i++)
  {
    _putchar(i);
  }
  _putchar('\n');
}
int main(void)
{
  print_alphabet();
  return (0);
}

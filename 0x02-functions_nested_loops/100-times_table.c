#include "main.h"
/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * rone = row, cone = column, d = digits of current result
 * Return: times table
 * add extra space past single digit
 */
void void print_times_table(int n)
{
	int rone, cone, d;

	for (rone = 0; rone <= n; rone++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (cone = 1; cone <= n; cone++)
		{
      if((rone < 15 && rone > 0) && (cone < 15 && cone > 0))
      { 
			  d = (rone * cone);
			  if ((d / 10) > 0)
			  {
			  	_putchar((d / 10) + '0');
			  }
			  else
			  {
				  _putchar(' ');
			  }
			  _putchar((d % 10) + '0');

			  if (cone < 9)
			  {
				  _putchar(',');
				  _putchar(' ');
			  }
		  _putchar('\n');
      }
    }
	}

}

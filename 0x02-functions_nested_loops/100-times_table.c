#include "main.h"
/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * rone = row, cone = column, d = digits of current result
 * Return: times table
 * add extra space past single digit
 */
void print_times_table(int n)
{
	int rone, cone, d;
	if(n<15 && n>0)
	{
		
		for (rone = 0; rone <= n; rone++)
		{
			_putchar('0');
			_putchar(',');
			_putchar('\t');
			for (cone = 1; cone <= n; cone++)
			{
				d = (rone * cone);
				if ((d / 10) > 0)
				{
					_putchar((d / 10) + '0');
				}
				else
				{
					_putchar('\t');
				}
				_putchar((d % 10) + '0');

				if (cone < n)
				{
				_putchar(',');
				_putchar('\t');
				}
			}
			_putchar('\n');
		}
	}

}

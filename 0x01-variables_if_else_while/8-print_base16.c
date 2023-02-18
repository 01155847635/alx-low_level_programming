#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int cnt = 1;
	char temp;

	while(cnt < 15)
	{
    		if(cnt >= 10)
    		{
	    	temp = (char)(97+cnt%10);
    		putchar(temp);
   		}
    		else
    		{
		putchar(48+cnt%10);
  	  	}
    		cnt++;
	}
	putchar('\n');
	return (0);
}

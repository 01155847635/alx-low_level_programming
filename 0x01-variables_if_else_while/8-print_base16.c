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
	int cnt = 0;
	char temp;

	while(cnt <= 15)
	{
    		if(cnt >= 10)
    		{
	    	temp = (char)(97+cnt%10);
    		putchar(temp);
   		}
    		else
    		{
		temp = (char)(48+cnt);
		putchar(temp);
  	  	}
    		cnt++;
	}
	putchar('\n');
	return (0);
}

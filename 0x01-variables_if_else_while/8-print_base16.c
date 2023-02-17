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

	while(cnt < 15)
	{
    if(cnt == 10)
    {
    putchar('A'+(cnt%10));
    }
    else
    {
		putchar(cnt);
    }
    cnt++;
	}
	putchar('\n');
	return (0);
}

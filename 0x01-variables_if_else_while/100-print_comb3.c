#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * generate combinationof two digits
 * Return:0 always success
 */

int main(void)
{
	int a, b;

	for (a = '0'; a < '9'; a++)
	{
		for (b = a + 1; b <= '9'; b++)
		{
			if (b != a)
			{
				putchar(a);
				putchar(b);
				if (a == '8' && b == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
#include <stdio.h>
/**
 * main - write in caps
 *
 * Return: always 0
 */

int main(void)
{
	char c;

	char d;

	c = 'a';
	d = 'A';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (d <= 'Z')
	{
		putchar(c);
		d++;
	}
	return (0);
}
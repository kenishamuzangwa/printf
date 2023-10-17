#include "main.h"
/**
 * my_puts - print strings
 *
 * @c: string
 * Return: number of bytes
 */

int my_puts(char *c)
{
	int list = 0;
	int d_value = 0;

	if (c)
	{
		while (c[list] != '\0')
		{
			m_putchar(c[list]);
			d_value += 1;
			list++;
		}
	}
	return (d_value);
}

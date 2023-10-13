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

	if (c)
	{
		for (list = 0; c[list] != '\0'; list++)
		{
			m_putchar(c[list]);
		}
	}
	return (list);
}

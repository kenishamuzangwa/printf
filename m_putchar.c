#include "main.h"
/**
 * m_putchar - print a character
 * @c: char input
 * Return: 1
 */

int m_putchar(char c)
{
	return (write(1, &c, 1));
}

#include "main.h"

/**
 * int_get - print intergers
 *
 * 0num: int
 * Return: number of bytes
 * */

 void int_get(int num)
 {
 int j;

 	if (num == 0)
	return;

	j = num / 10;

	int_get(j);
	m_putchar(num % 10 + '0');
}

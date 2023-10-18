#include "main.h"
/**
* int_get - print integers and return the number of bytes printed
*
* @num: int
* Return: number of bytes
*/

int int_get(int num)
{
int j;
int value = 0;
if (num < 0)
{
m_putchar('-');
value++;
num = -num;
}

if (num == 0)
{
m_putchar('0');
return (1);
}

j = num / 10;

value += int_get(j);
m_putchar(num % 10 + '0');
value++;
return (value);
}

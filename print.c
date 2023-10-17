#include "main.h"
/**
 * _printf - print to stdout formatted text
 *
 * @format: format specifier
 * Return: no of bytes printed
 */

int _printf(const char *format, ...)
{
	unsigned int i;
	int count = 0;
	int count_strings;

	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			m_putchar(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			m_putchar(va_arg(args, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			count_strings = my_puts(va_arg(args, char *));
			i++;
			count += (count_strings - 1);
		}
		else if (format[i + 1] == '%')
		{
			m_putchar('%');
			i++;
		}
		count += 1;
	}
	return (count);
}

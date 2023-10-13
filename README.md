This is the ALX Collaboration printf projext using printf standard library prototype 
int _printf(const char *format, ...);
This function will handle the following conversions
Returns: the number of characters printed (excluding the null byte used to end output to strings)
write output to stdout, the standard output stream
format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
c
s
%
d
i

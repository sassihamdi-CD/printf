#include "main.h"

/**
 * printf_pointer - prints an hexadecimal number.
 * @val: arguments
 * Return: counter
 */
int printf_pointer(va_list val)
{
	void *p;
	unsigned long int a;
	int b, i;
	char *hex = "0123456789abcdef";

	p = va_arg(val, void *);
	if (!p)
	{
		for (i = 0; "(nil)"[i]; i++)
			_putchar("(nil)"[i]);
		return (i);
	}
	_putchar('0');
	_putchar('x');
	a = (unsigned long int)p;
	b = printf_hex_aux(a);
	return (b + 2);
}

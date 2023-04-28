#include "main.h"

/**
 * printf_pointer - prints an hexagecimal address.
 * @val: arguments.
 * Return: the number of characters printed.
 */
int printf_pointer(va_list val)
{
	void *p;
	unsigned long int address;
	int counter = 0;

	p = va_arg(val, void *);
	address = (unsigned long int)p;

	if (address == 0)
	{
		counter += _puts("(nil)");
	}
	else
	{
		counter += _putchar('0') + _putchar('x');
		counter += printf_hex_aux(address);
	}

	return (counter);
}

#include "main.h"
#include <stdint.h>

/**
 * printf_pointer - prints a hexadecimal pointer address
 * @val: pointer to the address to be printed
 * Return: number of characters printed
 */
int printf_pointer(va_list val)
{
	void *p = va_arg(val, void *);
	uintptr_t a = (uintptr_t)p;
	int count = 0;

	if (p == NULL)
		count += _puts("(nil)");
	else
	{
		count += _putchar('0') + _putchar('x');
		count += printf_hex_aux(a);
	}
	return (count);
}

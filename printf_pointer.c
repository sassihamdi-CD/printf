#include "main.h"

#define MAX_HEX_DIGITS 16

/**
 * printf_pointer - prints a binary number
 * @args: the argument list
 * Return: the number of characters printed
 */

int printf_pointer(va_list args)
{
	void *ptr = va_arg(args, void *);
	unsigned long num = (unsigned long)ptr;
	int digits = 0;
	int i;
	unsigned long temp = num;
	char hex_digits[MAX_HEX_DIGITS] = "0123456789abcdef";
	char hex[MAX_HEX_DIGITS];
	int printed = 0;

	while (temp != 0)
	{
		digits++;
		temp /= 16;
	}

	printed += _putchar('0');
	printed += _putchar('x');

	if (num == 0)
	{
		printed += _putchar('0');
	}
	else
	{
		for (i = digits - 1; i >= 0; i--)
		{
			hex[i] = hex_digits[num % 16];
			num /= 16;
		}

		for (i = 0; i < digits; i++)
		{
			printed += _putchar(hex[i]);
		}
	}

	return (printed);
}

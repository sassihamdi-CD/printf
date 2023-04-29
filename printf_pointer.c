#include "main.h"

#define MAX_HEX_DIGITS 16

/**
 * printf_pointer - prints a pointer address in hexadecimal format
 * @args: the argument list
 *
 * Return: number of characters printed
 */
int printf_pointer(va_list args)
{
	void *ptr = va_arg(args, void *);

	if (ptr == NULL)
	{
		char *null_str = "(nil)";
		int i;

		for (i = 0; null_str[i] != '\0'; i++)
			_putchar(null_str[i]);

		return (i);
	}

	unsigned long int num = (unsigned long int)ptr;
	int printed = 0;
	char hex_digits[MAX_HEX_DIGITS] = "0123456789abcdef";
	char hex[MAX_HEX_DIGITS];
	int i, digits = 0;
	unsigned long int temp = num;

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

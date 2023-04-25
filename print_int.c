#include "main.h"
/**
 * print_int - Print integer
 * @types: List of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: Width specifier
 * @precision: Precision specifier
 * @size: Size specifier
 * Return: Number of characters printed
 */
int print_int(va_list types, char buffer[]
, int flags, int width, int precision, int size)
{
	int i = BUFF_SIZE - 2;
	int is_negative = 0;
	long int n = va_arg(types, long int);

	if (n == 0)
	buffer[i--] = '0';
	buffer[BUFF_SIZE - 1] = '\0';
	unsigned long int num = (n < 0) ? ((-1) * n)
	, is_negative = 1 : (unsigned long int) n;
	while (num > 0)
	{
		buffer[i--] = (num % 10) + '0';

		num /= 10;
	}
	i++;

	return (write_number(is_negative, i, buffer, flags, width, precision, size));
}

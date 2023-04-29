/**
 * printf_pointer - prints a pointer address in hexadecimal format
 * @args: the argument list
 * Return: the number of characters printed
 */
int printf_pointer(va_list args)
{
	void *ptr = va_arg(args, void *);
	unsigned long num = (unsigned long)ptr;
	int printed = 0;

	printed += _putchar('0');
	printed += _putchar('x');

	if (num == 0)
	{
		printed += _putchar('0');
	}
	else
	{
		printed += printf_hex_aux(num);
	}

	return (printed);
}

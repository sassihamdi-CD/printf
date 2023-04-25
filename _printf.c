#include "main.h"

/**
 * _printf - Receive the mais string and the argument to print
 * @format: String to be printed including the specifiers for each value
 * @...: Values to be printed
 * Return: Number of character printed
*/

int _printf(const char *format, ...)
{
	int char_printed = 0;
	va_list args;
	FunctionInfo f_list[] = {
		{"c", print_char},
		{"s", print_str},
		{NULL, NULL},
	};

	if (format == NULL)
		return (-1);

	va_start(args, format);

	char_printed = parser(format, f_list, args);

	if (char_printed == -1)
		return (-1);

	va_end(args);

	return (char_printed);
}

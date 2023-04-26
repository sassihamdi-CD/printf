#include "main.h"
/**
 * print_int - Prints an integer
 *
 * @ap: argument pointer
 * @params: the parameters struct
 *
 * Return: The number of characters printed
 */
int print_int(va_list ap, params_t *params)
{
	long int num;

	if (params->l_modifier)
		num = va_arg(ap, long int);
	else if (params->h_modifier)
		num = (short int)va_arg(ap, int);
	else
		num = (int)va_arg(ap, int);

	return (print_number(convert(num, 10, 0, params), params));
}

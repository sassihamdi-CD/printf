#include "main.h"
#include "string.h"
/**
 * print_string - prints string
 * @ap: argument pointer
 * @params: the parameters struct
 * Return: number chars printed
*/
int print_string(va_list ap, params_t *params)
{
	char *str = va_arg(ap, char *);
	char pad_char = ' ';
	unsigned int pad = 0, sum = 0, i = 0, j;
	(void) params;

	if (!str)
		str = "";
	pad = strlen(str);
	j = pad;

	if (params->precision < pad)
	       j = params->precision;
	if (params->minus_flag)
	{
		for (i = 0; i < j; i++)
			sum += _putchar(*str++);
		while (j++ < params->width)
			sum += _putchar(pad_char);
	}
	else
	{
		while (j++ < params->width)
			sum += _putchar(pad_char);
		for (i = 0; i < pad && i < params->precision; i++)
			sum += _putchar(*str++);
	}

	return (sum);
}

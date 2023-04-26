#include "main.h"

/**
*print_char - prints character
*@ap: argument pointer
@params: the parameters struct
* Return: number chars printed
*/
int print_char(va_list ap, params_t *params)
{
	char pad_char = '  ';
	unsigned int pad = 1, sum = 0, ch = va_arg(ap, int);
		if (params->minus_flag)

		sum += putchar(ch);

	while (pad++ < params->width)

		sum += putchar (pad_char);

	if (!params->minus_flag)

		sum += putchar (ch);

	return (sum);
}

#include "main.h"

/**
 * print_percent - prints a percent symbol
 * @ap: argument pointer
 * @params: the parameters struct
 * Return: number of characters printed
 */
int print_percent(va_list ap, params_t *params)
{
	(void)ap;
	(void)params;
	return (_putchar('%'));
}

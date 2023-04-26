#ifndef _PRINT_FUNCTION_H_
#define _PRINT_FUNCTION_H_
#include <stdarg.h>
#include <limits.h>

typedef struct parameters
{
	unsigned int unsign	: 1;
	unsigned int plus_flag		: 1;
	unsigned int space_flag		: 1;
	unsigned int hashtag_flag	: 1;
	unsigned int zero_flag		: 1;
	unsigned int minus_flag		: 1;

	unsigned int width;
	unsigned int precision;

	unsigned int h_modifier		: 1;
	unsigned int l_modifier		: 1;
} params_t;

int _puts(char *str);
int _putchar(int c);
int print_char(va_list types, params_t *params);
int print_string(va_list types, params_t *params);
int print_percent(va_list types, params_t *params);
int print_int(va_list types, params_t *params);

#endif /*_PRINT_FUNCTION_H_*/


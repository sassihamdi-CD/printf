#ifndef MAIN_H
#define MAIN_H

/* Libraries */
#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct structur - contains a symbol and a function pointer
 * @symbol: a character that represents a formatting specifier
 * @f: a pointer to a function that handles the specifier
 */
typedef struct structur
{
	char *symbol;
	int (*f)(va_list);
} FunctionInfo;

/* Main Functions */
int _printf(const char *format, ...);
int parser(const char *format, FunctionInfo f_list[], va_list args);
int _putchar(char c);
int print_char(va_list args);
int print_str(va_list args);


/* Helpe Functions */
int str_len(char *str);

#endif /* MAIN_H */

#include "main.h"
#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
    int printed_chars = 0;
    va_list args;
    char c_val;
    char *s_val;

    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++;

            switch (*format)
            {
                case 'c':
                    c_val = va_arg(args, int);
                    putchar(c_val);
                    printed_chars++;
                    break;

                case 's':
                    s_val = va_arg(args, char *);
                    while (*s_val)
                    {
                        putchar(*s_val);
                        s_val++;
                        printed_chars++;
                    }
                    break;

                case '%':
                    putchar('%');
                    printed_chars++;
                    break;

                default:
                    putchar('%');
                    putchar(*format);
                    printed_chars += 2;
                    break;
            }
        }
        else
        {
            putchar(*format);
            printed_chars++;
        }

        format++;
    }

    va_end(args);

    return printed_chars;
}

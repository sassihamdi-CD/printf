#include "main.h"

int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;
    char c;

    va_start(args, format);

    while ((c = *format++) != '\0') {
        if (c == '%') {
            c = *format++;
            switch (c) {
                case 'c':
                    putchar(va_arg(args, int));
                    count++;
                    break;
                case 's':
                    count += fputs(va_arg(args, char *), stdout);
                    break;
                case '%':
                    putchar('%');
                    count++;
                    break;
                default:
                    /* unsupported conversion specifier, just ignore it */
                    break;
            }
        } else {
            putchar(c);
            count++;
        }
    }

    va_end(args);

    return count;
}

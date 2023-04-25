# 0x11. C - printf

+ function that produces output according to a format.
+ Handle the conversion specifier.

# Requirements

## General
+ Allowed editors: vi, vim, emacs
+ All files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
+ All files should end with a new line
+ A README.md file, at the root of the folder of the project is mandatory
+ code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
+ we are not allowed to use global variables
+ No more than 5 functions per file
+ In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
+ The prototypes of all our functions should be included in your header file called main.h
+ Don’t forget to push header file
+ All our header files should be include guarded
+ Note that will not provide us the _putchar function for this project

## More Info

### Authorized functions and macros

+ write (man 2 write)
+ malloc (man 3 malloc)
+ free (man 3 free)
+ va_start (man 3 va_start)
+ va_end (man 3 va_end)
+ va_copy (man 3 va_copy)
+ va_arg (man 3 va_arg)

## Compilation

+ our code will be compiled this way:
```
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c

```
+ As a consequence, be careful not to push any c file containing a main function in the root directory of your project (you could have a test folder containing all your tests files including main functions)
+ Our main files will include your main header file (main.h): #include main.h
+ ou might want to look at the gcc flag -Wno-format when testing with your _printf and the standard printf. Example of test file that you could use:

 ```
alex@ubuntu:~/c/printf$ cat main.c 
#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
 ```
## Tasks
'''
0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life
'''
Write a function that produces output according to a format.
+ Prototype: int _printf(const char *format, ...);
+ Returns: the number of characters printed (excluding the null byte used to end output to strings)
+ write output to stdout, the standard output stream
1. format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
	-c
	-s
	-%
+ You don’t have to reproduce the buffer handling of the C library printf function
+ You don’t have to handle the flag characters
+ You don’t have to handle field width
+ You don’t have to handle precision
+ You don’t have to handle the length modifiers

'''
1. Education is when you read the fine print. Experience is what you get if you don't
'''
Handle the following conversion specifiers:
+ d
+ i
+ You don’t have to handle the flag characters
+ You don’t have to handle field width
+ You don’t have to handle precision
+ You don’t have to handle the length modifiers
## diagrams for tasks
+ diagram for task 0 

![plot](images/Untitled Diagram.drawio.png)

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

## Daigram for task 0 
![this is daigram that explain what this task about] 
(https://viewer.diagrams.net/?tags=%7B%7D&highlight=0000FF&edit=_blank&layers=1&nav=1&title=Untitled%20Diagram.drawio#R7V1bd%2BI4Ev4t%2B5CzPXsOHN%2BBx4QkPZfunt7J7vbsU44wArwIy%2B1LgP71K1mysSWBgcGGgF%2BCLcmlS1V9VSpdcmcOF6uPIQhmn%2FEYojtDG6%2FuzMc7w9B7Wo%2F80JQ1S7EckyVMQ2%2FMC20SXrwfkCdqPDXxxjAqFYwxRrEXlBNd7PvQjUtpIAzxslxsglG51gBMoZTw4gIkp37zxvGMpfaN3ib9Z%2BhNZ1nNujNgOQuQFeY9iWZgjJeFJPPpzhyGGMfsabEaQkQHLxuXb7%2Bsv6FPc%2Bfjr%2F%2BMvoN%2FP%2Fz2ry%2F%2F6TBiz4d8knchhH58WtIGI%2F0GUMLHi%2Fc1XmcDGOLEH0NKRLszH2bxApFHnTz%2BD8bxmjMcJDEmSTiMZ3iKfYA%2BYRzwchPsx7yYTt%2BhP76njCXvI4TdOUt69hDidZA3Xr5P3qI4xPOcd5RAzghaGIERRA%2FAnU%2FThg4xwiHJ8rEPKakxEQbel03jnjapD3uOLecBpVeQKz7SHyFewDhckwIhRCD23srCB7gMT%2FNy%2BadfsUfqNTSub7mwrTNx1MokIpyELuRfFbldRagnEIpBOIWxRIg8FPqzSUqFSS1Yn3%2F%2BpI1fv74s4O9Pw19fhss%2F5xMui0XBeiE1xpJ0EVIECSgjljMvhi8BcGnOkoBRWdoO49MbDGO42smpLNcpD5TJX5cbsNCzsZwVgKKvbedtaTAPHTnDqtbJsk4Y5ZEi6hHQcovVlEJ6d4Lw0p2Rwe8C38cxEU%2Fsv9JvAPKmPimI4CTONOkrjjxagCSHrLMPAZURGD69kZGPauZGPqzbuTFQMKNn18WMnoIZDqLDEgXAL3HF%2BZ5QU%2FDgMgi6p2gwHX3QB8SgkNo1s8d%2Be%2F2f0hHUKDB2JmDhoTUr%2Fhn6CLNCnwlOufx5iP0II9K39I1UBBZUOXh1Q4IIHgxJzhe4FDPZJwvs44hpVl5vlCIsrVU3uk6wKmaxLtE8H4cLgAp5byD0APklogPiJKSWfWc5FwTbiiw5A2mmpWksBxGjAsMOba3nT%2BUvcRjMgM9JGiyNyFbc4cJ8n9KYxIUcj5gvn9ejZR1Nc%2BKQkJoQ6lk9Ph8hIm6p41GoZInDcblZOS3Sk9HcI%2BQoTaaaHS6wpXKj3Ep1BBkxLC4jhmVkD9ZPhZaOoYvDVHM78cxz5z6MePM8n%2BhrNjpi2QInd5YrNKdUjkAHiMXBGXtRgMA6K448kmFof%2FMWAbGwwGdD7%2BQC6EzpLzNOr0FIHiYfiLMX0XcKS%2BTnH5QHpKK0591ul%2FWcqRlRW6ZpjI4EhbQr57MeplXGK1vGK1NXAJZ1AusxWU%2F7n%2Bfr36aL4Q%2Fbd77cf%2Fzyh8Luen6QxDku%2BKMoYKNbemeMOAzYUnBOZTVDNsMyt0Fb4nU2KJQWfnkmGIc7f8BpgmjlKmx7eWZQiNW4VsDL3Rj5yRtBJuo76Qk4KeJKlHowFaqsm4yWno0JHxJRIYpiv5%2BkZ3adSDFACCJMzPtCMP2SXxDA0COSBUPxw6%2BbDKXybNx%2BShiEbubCU6rMeDxqXcOs0zUzbLUPW%2FTNVO6AU5d26QrtSuHS%2B0HNgqBUb%2BAVeVHc6lXDegWCA%2BxHWc4rzAgYkcFIYni%2FUYeyclhKJaxNQeyy9cl946KCWAoF0bW6NMRuAwqXFVDQB90yiuZzqoNDCjKpwX5BBcIdsC4US2eU0Y5GC8GLzK3aN9ghlCcPrAXHRjiUku5U2AIt8SMCcUTQW%2FxvFv%2B3Qn8FH0Z4RafF%2BQRvRKZ8ZC5KkhndQovI9PZDhzWxE4QUtxBF16gTrf0YrDpzuKYTxpZrlVzTXNLOqMSHAHXmW2aQxzG2VbDTKpjHSoQwSlCRAbfka1mKqb5u6U36Wv3W12p9rZvwtQatpF%2BapJeEwBSF8wA5V6PqqaVc0idLr5Dzqi%2FqkfQsWFwQdeIeZfOInTFcbo7p%2FgryJ9u0cJ3W19HPbn11owWlSwMlQWNtEU2ON7%2BOuBGjJvNr9w4zv0L5mkDJrBb1692SMNAroSeTs4aQRw6yMhtBsX8GNzOzNE7hgRGCmVUY0Sf4PQFIaSL4YmrRDnCGuNBna0V04DwXoHuesfDG4xQMSJ3ej7QuBi5c8gld%2B%2BHOfqS0CNBFG2PCJEYAnQmBMiGpLsbmC7MZYy1bYmzuwBc5Kzr1p2OsHFMkI40U60qRcjPVNVn4nmqxr9m1DF21%2Bae18Jdk4XtH74%2BUSe25Q%2FKvWvieeZiFF8rXZOHlWJJy3wgBkTT0l%2B1cuGIAGqh2gjYMQG3c49IBqC%2BixvEANBD9ipoAqD84DICE8vUAUMaLdoqxxfdpdoqRjb7kiWob51ObJL7LlqbEwNRtTysEhNDkaYXSjtQ2rTDliV418JbtitJyKCzM0VtuGWzukkizGYi3tDL66TWenFF21DLPwS248uI%2F6efEKLG3%2FxZyHleZ7acv68JLYRvpo%2FZ%2BuW4ISqtbe8b7Tmb%2FVCG2dlvD7nMrV3VqpbBJ470cW9m2ZeRKzqzwSa794FFHg5KjiAG%2FJzSeKq3FnXvLGeEgIdPqe6vvN6XvVTsJI9UOtvNoZVVTg7GisX%2BvCVqqGuNSnJBGzh5ewu7a2ge18ijWcZEIIs1elIYZlLHRumakuujcaopzIvlyYCnAUNtJqn1OubehzUZDm1ZXFJPjdy%2FKtOravijJtlW1r2v3BzWFN%2FdYSjx7eHPshdDl5ZYwimuEJEdgQn7FxvkinvIKGL%2BxRHsmem1oKa7cdGSzo4uhMVsR2lTZkfpCm%2FKywS%2FPt80l8UoCPQ82Fy8laJRJ7yaieRhPKqOXptGM7bbFmLV0O1HN0cusowU1FIMnPGySbkNTx07aIMkFnfW6tcm0fSX9uP6DePICnanYt6nyQsSFvJMZOEt25t%2FfAqtpnclYmWKQoW5jJYce8v3Sd8ZDmqI1CQfpbVjAj1uzdKRZcnUZIoMEIXbdWHtq%2FAJOjX8o%2BINMzS7inoZW9WpQPb3VuAvQuHTaVWor%2Fxsccr3ie%2FYUTXvbtLgUCWk0FCIf3fJ8N4QLmLpII9p6%2FaqYYFlCqDd394pBw0bvyDR7txqP4qxgDvYeBU83F%2Fhr8yvZY39CEZS4eFNxXl1cQzGzQzwVayi1gVtW2c3plXVyddlz7dI2mp06W7L5GrJjAUESszuEr8h0keEVl7Et1b0T2TW1RSUTbx44HRbKZ4SlQb%2BllWRdDCdZivMWKhjM1i5PzyF5JZmfnXnNtaRwduaWbVhHvOHZ0nvdcx%2BXsW91udIaNGTGxP9N44iuft1mTD5Xu9ct%2BdmpZyKbRDTTexALN2xck%2BWzJMuXuxpFvbSbtHz2LR8RNSUzN9jPzNV41be86L8xcG2k7zyxdfvxiH%2BechvOhmkKKmSrbnhwGnU1%2BjfqatgNLTbL%2Fwav4cVmWw5dXXnAV3fsrujWO4otiLqWX4DRSNTXHtyqrjln0rV%2Bw7sQbTk0MlRfnwb98XXpXG8bzFXtzK7NW3dk5%2Fz97YnKRrFp1TE00WuvWXWyju5z%2F9c1601fsULcsN7Is1wePQxhnIR%2BHn1QX%2F58TcyxJUdioxel%2BLvSkTji6CJ53fw7b6Zam3%2BKbj79Hw%3D%3D)

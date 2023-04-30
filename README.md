
# _printf Function Project

This is our group project for the Alx programming course, where we were tasked with replicating the printf function in C Programming language and calling it `_printf`.





## Description
Our `_printf` function mimics the standard printf function from the `<stdio.h>` header file. It writes the C string pointed by format to the standard output (stdout). If format includes format specifiers (sub-sequences beginning with %), the additional arguments following format are formatted and inserted in the resulting string replacing their respective specifiers.
## Getting Started
To use the `_printf` function, simply include the header file `"main.h"` and compile your program using the source files for the `_printf` function.

Here is an example of how to use the `_printf` function:


```c
#include "main.h"

int main()
{
    _printf("Hello, world!\n");
    return (0);
} 
```

## Supported Format Specifiers

Our `_printf` function supports the following format specifiers:

| Specifier | output | 
| -------- | -------- | 
| %c | Character |
| %s | String of characters | 
| %d | Signed decimal integer|
| %i | Signed decimal integer |
| %u | Unsigned decimal integer |
| %x | Unsigned hexadecimal integer (lowercase) |
| %X | Unsigned hexadecimal integer (uppercase) |
| %p |  Adresse of pointer |
| %S | Prints a string of characters in hexadecimal |

## Authors

- **[adnan-jahbli](https://github.com/adnan-jahbli)**
- **[younesapi](https://github.com/younesapi)**

## Acknowledgements

We would like to thank our instructors at Alx for providing us with the guidance and resources necessary to complete this project. We also acknowledge the creators of the original `printf` function for their contributions to the field of computer programming.


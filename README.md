## Printf Function
## \_printf()
---
### Synopsis
This version of printf recreates the standard printf function. It's built to have all of the same basic functionalities as printf in the standard library, with a few additional capabilities. Printf is a function that takes in a format string, prints it to the standard output, and acts on format specifiers to print their respective arguments.
---
### Environment
This version of printf was built and tested in Vagrant virtual machine, on the Ubuntu 14.04 LTS.
---
Format Specifiers|Data Type
---|---
%i, %d|Prints a signed decimal value
%c|Prints a character
%s|Prints a string
%S|Same as (s) but prints unprintables as hex codes (32 = \\x20)
%o|Prints a unsigned int in octal
%u|Prints an unsigned int in decimal
%b|Prints an unsigned int in binary
%x|Prints an unsigned int in hexadecimal with abcdef
%X|Prints an unsigned int in hexadecimal with ABCDEF
%r|Prints a string in reverse
%R|Prints an string after encoding in Rot13
%p|Prints the address of a pointer in hexadecimal
%%|Prints a modulo
---
## How to Use
1) Clone this repository into your git. It contains all of the necessary components to make printf fully functional.
2) Include the "holberton.h" header file in the programs that you want to use printf with.
3) Execute \_printf() as you would with a printf() function. Type the string that you want printed within the parentheses enclosed in double quotes. For format specifiers type a '%' sign followed by the character corresponding to the format specifier that you want to implement. Follow your double quoted string with a comma, and then a list of args to be called in the place of the specifiers.

For example:
"\_printf("Hello %c", "World")"

Will produce a string into the output that says:
"Hello World"

## File Descriptions
---|---
\_printf.c | Executes \_printf function
holberton.h | Function protoypes & struct typef
helper.c | Loops through struct and finds the correct format specifier
\_putchar.c | Holds the putchar function, as well as puts and printchar
printint.c | All the functions to print integers
printstring.c | All the nevessary functions for printing a string
\_strlen.c | Various basic functions (strlen, strcmp, strcpyrot13, printrot)
pointadd.c | Functions to print the address of a pointer
decimalconvert.c | Functions that convert decimals into other types of int
decimalconvert2.c | More functions that convert decimals
print\_special.c | Miscellaneous cases for printing (modulo, reverse, unsigned ints, etc.)
README.md | Summary of the program and instructions on how to use \_printf

## Authors
	*Dimitrios Philliou* - [Github] (https://github.com/DimitriCat)
	*Thomas Dumont* - [Github] (https://github.com/Vilyanare)

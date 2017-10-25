# \_printf
---
A function that takes in a format string and acts on format specifiers to print following respective arguments.
---
Format specifiers|Description
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

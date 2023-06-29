### C - More pointers, arrays and strings
## main.h file
* contains the prototypes of all the functions and the _putchar prototype

# 0. strcat
* function that concatenates two strings.
* This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
# 1. strncat
* function that concatenates two strings.
* The _strncat function is similar to the _strcat function, except that
it will use at most n bytes from src; and
* src does not need to be null-terminated if it contains n or more bytes
* Return a pointer to the resulting string dest
# 2. strncpy
* Write a function that copies a string

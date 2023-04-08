#include "main.h"
/**
* function - this function use putchar to print a string
* we get the pointer string
* Return : 0 (Suceess) 
*/
void _puts_recursion(char *s){
    if (*s == '\0')
    {
        _putchar('\n');
    }
    else
    {
        _putchar(*s);
        _putchar(s + 1);
    }
}
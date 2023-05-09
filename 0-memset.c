#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

char *_memset(char *s, char b, unsigned int n)
{
   
    for ( unsigned int i = 0; i < n; i++)
    {
        s[i] = b;
    }
    return s;
}
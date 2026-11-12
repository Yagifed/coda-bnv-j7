#include <stdlib.h>
#include <stdio.h>
#include "str_cpy.h"
#include "str_len.h"

char *str_cpy(char * str)
{
    char *cpy = malloc(sizeof(char) * (str_len(str) + 1));
    int i = 0;
    while (str[i] != '\0')
    {
        cpy[i] = str[i];
        i++;
    }
    cpy[i] = '\0';
    return cpy;
}
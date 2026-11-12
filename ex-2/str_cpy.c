#include <stdlib.h>
#include <stdio.h>
#include "str_cpy.h"

int str_len(char *str)
{
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    return len;
}

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
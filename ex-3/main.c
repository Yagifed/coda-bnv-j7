#include <stdlib.h>
#include <stdio.h>
#include "print_tab.h"

int main(int argc, char **argv)
{
    print_tab(argv + 1);
    return 0;
}
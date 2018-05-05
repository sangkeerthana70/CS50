#include <cs50.h>
#include <stdio.h>
#include <string.h>

#include "struct.h"

int main(void)
{
    int a = 2;
    printf("a is: %i\n", a);
    a = 7;
    printf("now a is: %i\n", a);
    int * x = &a;
    printf("x : %p\n", x);
    * x = 10;
    printf("a after dereferencing: %i\n", a);
}

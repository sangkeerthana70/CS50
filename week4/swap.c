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
    int * x = &a;//store the memory address of a in the variable x. Ampersand gets the mem address of a
    printf("x : %p\n", x);
    * x = 10;//*x is the value of x, which has the value of a as well since the memory address of a and its value is assigned to x.
    printf("a after dereferencing: %i\n", a);
}

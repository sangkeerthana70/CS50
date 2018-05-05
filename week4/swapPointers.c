// Fails to swap two integers
#include <cs50.h>
#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    swap(&x, &y);//pass the address of x and y
    printf("x is %i, y is %i\n", x, y);
}

void swap(int * a, int * b)//declare a variable a of type pointer that will store an address
//of another memory location(which will be x) which will have an integer
{
    printf("address of a: %p\n", a);
    printf("address of b: %p\n", b);
    printf("value of a: %i\n", *a);//get the value stored in this address a
    printf("value of b: %i\n", *b);
    int tmp = *a;
    * a = * b;
    * b =  tmp;
    printf("a is: %i\n", *a);
    printf("b is: %i\n", *b);
}

#include <stdio.h>
#include<cs50.h>

int main(void)
{
    char character = 'L';
    //printf("base\n");
    printf("%c\n", character);//prints character L
    printf("%i\n", 54);//prints int 54
    printf("%i\n", character);
    //printf("%i\t%c\n", character + 4, character + 4);//adds character with an integer
    //printf("%i\t%c\n", 'r' - 'a', 'r' - 'a');
    printf("%i\t%c\n", 'r' - 'a', 17 + 'a');
    printf("%lu\n", sizeof(char));//unsigned long
    printf("%lu\n", sizeof(int));
}
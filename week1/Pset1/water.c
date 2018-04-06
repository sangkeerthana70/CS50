#include<stdio.h>
#include<cs50.h>

int main(void)
{

   int Minutes = get_int();
   int Bottles = Minutes * 12;

    printf("Minutes: %i\n", Minutes);
    printf("Bottles: %i\n", Bottles);
}

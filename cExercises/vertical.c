#include <stdio.h>
#include<cs50.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
        for (int i = 0; i < n; i++) {
            for (int x = 0; x < 1; x++) {
                    printf("#\n");
                }
           // printf("\n");
        }
    }
    while(n<0 || n>23);
}
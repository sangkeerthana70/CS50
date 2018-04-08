#include <stdio.h>
#include<cs50.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Width: ");
            for(int i=0; i<n; i++) {
            printf("%s", "*");
        }
        printf("\n");
    }
    while(n<0 || n>23);
}
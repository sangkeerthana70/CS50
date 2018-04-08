#include <stdio.h>
#include<cs50.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Perimeter: ");

        // print first line
        for (int x =0; x < n; x++) {
            printf("*");
        }
        printf("\n");

        // print other lines

        int spaceCnt = n - 2;
        for (int i=0; i<spaceCnt; i++) {
            printf("*");//explicit print command for printing star
            for (int x =0; x < spaceCnt; x++) {//for printing spaces upto the spaceCnt is reached
                printf(" ");
            }
            printf("*\n");//explicit command to print star
        }
        // print last line
        for (int x =0; x < n; x++) {
            printf("*");
        }
        printf("\n");

    }
    while(n<0 || n>23);
}
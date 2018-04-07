#include <stdio.h>
#include<cs50.h>

int main(void)
{
int n;

do
{
    n = get_int();
    printf("Height of Pyramid :%i\n",n);

    for (int i = 0; i < n; i++) {
        //printf("%i\n",i);

        for (int y = 0; y <= n-i-2; y++ ){
            printf("%s", " ");
        }
        for (int x = 0; x <=i+1; x++) {
            printf("%s", "#");
        }
        printf("  ");
        for (int x = 0; x <=i+1; x++) {
            printf("%s", "#");
        }

        printf("\n");
    }

    return 0;

}
while (n<0 || n>23);
}



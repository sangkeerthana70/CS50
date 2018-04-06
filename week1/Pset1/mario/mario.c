#include <stdio.h>
#include<cs50.h>
//#define height=23
int main(void)
{
int n;

char a,b;
  a = '#';
  b = ' ';
do
{
    n = get_int();

    for (int i = 0; i < n; i++) {
        //for (int x = 0; x <=i; x++) {
            printf("Hashes: %c\n", a);
            //printf("Spaces: %c\n", b);
        //}
    }
    printf("User input: %i\n", n);
    return 0;

}
while (n<0 || n>23);
}



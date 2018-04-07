#include <stdio.h>
#include<cs50.h>

int main(void)
{
int n;
//prompts user for a positive integer
do
{
    n = get_int();
    printf("Height of Pyramid :%i\n",n);
    //outer most loop to iterate up until the height of pyramid is reached
    for (int i = 0; i < n; i++) {
        //printf("%i\n",i);
        //loop to print spaces
        for (int y = 0; y <= n-i-2; y++ ){
            printf("%s", " ");
        }
        //loop to print hashes
        for (int x = 0; x <=i+1; x++) {
            printf("%s", "#");
        }
        printf("\n");//go to next line
    }

    return 0;

}
while (n<0 || n>23);//checks for invalid number supplied and repeats the do while again
}



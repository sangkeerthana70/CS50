#include <stdlib.h>//includes atoi function
#include <string.h>
#include <stdio.h>
#include<cs50.h>
#include<ctype.h>

int main(int argc, string argv[])
{
    int key = atoi(argv[1]);
    printf("Number of arguments : %i\n",argc);
    printf("Value of Key : %i\n",key);

    string inpStr = get_string("Enter the string to be encoded : ");
    printf("String to be encoded : %s\n", inpStr);

    int lCaseStart = 'a';
    int lCaseEnd = 'z';

    int uCaseStart = 'A';
    int uCaseEnd = 'Z';

    printf("%i\n",lCaseStart);
    printf("%i\n",lCaseEnd);
    printf("%i\n",uCaseStart);
    printf("%i\n",uCaseEnd);

    char alpha = 100;
    printf("%c\n",alpha);


}
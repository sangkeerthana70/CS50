#include <stdlib.h>//includes atoi function
#include <string.h>
#include <stdio.h>
#include<cs50.h>
#include<ctype.h>

int main(int argc, string argv[]) {
    //if (argc>1) {
        printf("%i\n", argc);
        printf("%s\n", argv[0]);
        printf("%s\n", argv[1]);
    //}
    string num = argv[1];
    int converted = atoi(num);//converting the argv[1] value which is a string to a number using atoi
    printf("%d\n", converted);
    string plainText = get_string();
    for (int i = 0; i < strlen(plainText); i++)
    {
        int asciiVal =  plainText[i] + converted;
        printf("%c %i\n", plainText[i], asciiVal);
    }

    //printf("Plain text: ", plainText);









   // printf("cipherText:  ", cipherText);
}
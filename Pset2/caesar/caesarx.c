#include <stdlib.h>//includes atoi function
#include <string.h>
#include <stdio.h>
#include<cs50.h>
#include<ctype.h>

int encodeIt(int in, int key);
int main(int argc, string argv[])
{
    if (argc != 2) {
        printf("Please supply one parameter!\n");
        return 1;
    }
    int key = atoi(argv[1]);
    printf("Value of Key : %i\n",key);

    string inpStr = get_string("plaintext : ");
    char currChar;
    char encChar;

    printf("ciphertext: ");

    for (int i = 0; i < strlen(inpStr); i++)
    {
        currChar = inpStr[i];
        if (isalpha(currChar)) {
            encChar = encodeIt(currChar,key);//currChar is a char data type here, calling the encodeIt function.
            printf("%c",encChar);
        }
        else {
            printf("%c",currChar);
        }
    }
    printf("\n");
    return 0;
}

int encodeIt(int in, int key) {//takes two arguments, currChar(coming in as char and converted to string) and key
    int mKey = key % 26;//to make sure the user's input for key is < 26
    int start;
    int end;
    int bAlphaIn;
    int eAlphaIn;
    if (isupper(in)) {
       start = 'A';
       end = 'Z';
    }
    else {
        start = 'a';
        end = 'z';
    }
    //printf("in:%i mKey:%i start:%i end:%i",in,mKey,start,end);

    int result = in + mKey;
    if (result > end) {
        result = (result%end)+start-1;
    }
    //printf("result%i\n",result);
    return result;
}
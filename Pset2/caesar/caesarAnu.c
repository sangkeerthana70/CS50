#include <stdlib.h>//includes atoi function
#include <string.h>
#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

int encodeIt(int in, int key);
int main(int argc, string argv[])
{
    if (argc != 2) {
        printf("Please supply one parameter!\n");
        exit(1);//same as return 1
    }
    int key = atoi(argv[1]);
    printf("Value of Key : %i\n",key);

    string inpStr = get_string("plaintext : ");
    //printf("plaintext: %s\n", inpStr);

    printf("ciphertext: ");

    int result;
    for (int i = 0, length = strlen(inpStr); i < length + 1; i++)//runs this loop for arg[1] constant which is static
    {
        if (isalpha (inpStr[i]))
        {

        //printf("the character at pos %i: %c\n", i, inpStr[i]);
        //printf("the ascii value at pos %i: %i\n", i, inpStr[i]);
       //printf("the alphabetical index value at pos %i: %i\n", i, argv[1][i] - 'a');
        //printf("aplhabetical index of current char %i: %i\n", i, argv[1][i]);
                int start;
                int end;
                int alpIndex;
                int asciiVal;
                if (isupper (inpStr[i])) {
                    start = 'A';
                    end = 'Z';
                    asciiVal = inpStr[i];
                    alpIndex = asciiVal - 'A';//to calculate the alphabetical index from 'A' to inpStr[i]
                    //printf("the alphabetical index at pos %i: %i\n", i, alpIndex);
                    result = ((alpIndex +  key) % 26) + 'A';
                    //printf("encipered key : %i\n", result);
                    //printf("Ascii of result: %c\n", result + 'A');//add 'A' to bring the result back in range
                    printf("%c", result);

                }
                else {
                    start = 'a';
                    end = 'z';
                    asciiVal = inpStr[i];
                    alpIndex = asciiVal - 'a';
                   // printf("the alphabetical index value at pos %i: %i\n", i, alpIndex);
                    result = ((alpIndex +  key) % 26) + 'a';
                   // printf("encipered key : %i\n", result);
                   // printf("Ascii of result: %c\n", result + 'a');//add 'A' to bring the result back in range
                    printf("%c", result);

                }

        }
        else
        {
            //printf("nonAlpha character present in pos %i : %c\n", i, inpStr[i]);
            printf("%c", inpStr[i]);
        }

    }
   // printf("\n");
    return 0;
}

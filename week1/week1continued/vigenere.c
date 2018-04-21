#include <stdlib.h>//includes atoi function
#include <string.h>
#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    string key = argv[1];
    //check to see if argc value is > 2
    if (argc != 2)
    {
        printf("Please supply one parameter!\n");
        exit(1);//same as return 1
    }
    for (int k = 0; k < strlen(argv[1]); k++)
    {
        if (!isalpha(argv[1][k]))
        {
            printf("Please enter only alpha characters as keywords\n");
        }
    }
    printf("you entered Key : %s\n", key);
    //get user input for a string
    string inpStr = get_string("plaintext : ");
    printf("ciphertext: ");//since C has no concatenation in strings printing each char returned after every iteration
    int result;
    /*
    for (int k = 0, k < strlen(key); k++) {
        printf("Keyword incremented to next letter in keyword: \n");
    }*/
    for (int i = 0, length = strlen(inpStr); i < length; i++)//runs this loop for arg[1] constant which is static
    {
        int kwalpIndex;
        int kwascii;
        for (int k = 0, k < strlen(key); k++) {
            printf("Keyword incremented to next letter in keyword: \n");
        }
        //check if a char is aplha
        if (isalpha(inpStr[i]))
        {
            int alpIndex;
            int asciiVal;
            //check for each char if upper case
            if (isupper(inpStr[i]))
            {
                asciiVal = inpStr[i];
                alpIndex = asciiVal - 'A';//to calculate the alphabetical index from 'A' to inpStr[i]
                result = ((alpIndex +  key) % 26) + 'A';
                printf("%c", result);
            }
            //lower case check
            else
            {
                asciiVal = inpStr[i];
                alpIndex = asciiVal - 'a';
                result = ((alpIndex +  key) % 26) + 'a';
                printf("%c", result);
            }
        }
        //print non-alpha chars
        else
        {
            printf("%c", inpStr[i]);
        }
    }
    printf("\n");
    return 0;*/
}

#include<cs50.h>
#include<stdio.h>
#include<string.h>

int main(int argc, string argv[])
{
    if (argc != 2) {
        printf("Usage: strings \"phrase\"\n");
        //return 1;//1 is success, zero is bad or false
        exit(1);
    }
    printf("%i\n", argc);
    //int length = strlen(argv[1]);
    //printf("%i\t%s\n", length, argv[0]);
    //printf("%i\n", length);
    for (int i = 0, length = strlen(argv[1]); i < length + 1; i++)//runs this loop for arg[1] constant which is static
    {
        if (argv[1][i] != ' ')//ignore spaces in argv[1], EG:"Hello World"
        printf("the character at pos %i: %c\n", i, argv[1][i]);
        printf("the ascii value at pos %i: %i\n", i, argv[1][i]);
        //printf("the ascii value at pos %i: %i\n", i, argv[1][i] - 'a');

    }
}

#include <stdio.h>
#include<string.h>
#include<cs50.h>

int main(void)
{
    string s = get_string("Name:   ");
    printf("Name:  \n");
    for (int i = 0; i < strlen(s); i++)
    {
        //here (int) s[i] means typecasting where a char or character is converted into an integer
        printf("%c %i\n", s[i], (int) s[i]);
    }
}
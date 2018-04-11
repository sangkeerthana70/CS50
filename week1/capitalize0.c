#include <stdio.h>
#include<cs50.h>
#include<string.h>
//this code capitalizes a string input to upper case. We can also use toupper function from the library
int main(void)
{
    string s = get_string("before:   ");
    printf("after:  ");
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
           printf("%c", (int) s[i] - ('a' - 'A'));//don't need to use type cast here since computer understands characters are integers and integers are characters
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}
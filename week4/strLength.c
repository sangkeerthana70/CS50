#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int size = 0;

int main(void)
{
    // get a string
    char * s = get_string("s: ");//string s is char *s
    printf("String: %c\n", *s);
    printf("Address of first char: %p\n", s);
    if (!s)
    {
        return 1;
    }

}
#include <stdio.h>

/*Write a program in c to print all the letters in english alphabet using a pointer.*/

int main()
{
    char alphabet;
    char *ptr;
    ptr = &alphabet;
    for (alphabet >= 'A'; alphabet <= 'Z'; alphabet++)
    {
        printf("%c", ptr + alphabet);
    }
    printf("\n");

    return 0;
}

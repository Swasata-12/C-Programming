#include <stdio.h>
#include <string.h>

/*Write a program to input a string and count how many blank spaces are there.*/

int main()
{
    char name[50];
    int i, l, c = 0;
    printf("Enter the name:\n");
    gets(name);
    l = strlen(name);
    for (i = 0; i < l; i++)
    {
        if (name[i] == ' ')
        {
            c = c + 1;
        }
    }
    printf("The total number of blank spaces in the given string is %d", c);
    return 0;
}

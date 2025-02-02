#include <stdio.h>
#include <string.h>

/*Write a program to convert all lower case vowels to uppercase in a string. This can also be
solved using switch case.*/

void doUppercase(char str[])
{
    int l;
    l = strlen(str);
    for (int i = 0; i < l; i++)
    {
        if (str[i] == 'a')
        {
            str[i] = 'A';
        }
        else if (str[i] == 'e')
        {
            str[i] = 'E';
        }
        else if (str[i] == 'i')
        {
            str[i] = 'I';
        }
        else if (str[i] == 'o')
        {
            str[i] = 'O';
        }
        else if (str[i] == 'u')
        {
            str[i] = 'U';
        }
    }
    puts(str);
}

int main()
{
    char str[100];
    printf("Enter your string:\n");
    gets(str);
    doUppercase(str);
    return 0;
}

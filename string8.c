#include <stdio.h>
#include <string.h>

/*Write a program to remove blank spaces in a string.*/

void removeBlankspace(char str[])
{
    int l = strlen(str);
    for (int i = 0; i < l; i++)
    {
        if (str[i] == ' ')
        {
            str[i] = str[i + 1];
        }
    }
    puts(str);
}

int main()
{
    char str[100];
    printf("Enter your string:\n");
    gets(str);
    removeBlankspace(str);
    return 0;
}

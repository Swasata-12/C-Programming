#include <stdio.h>

/*Write a program to find if a character entered by user is upper case or not.*/

int main()
{
    char character;
    printf("Enter the character\n");
    scanf("%c", &character);
    if (character >= 'A' && character <= 'Z')
    {
        printf("Upper case\n");
    }
    else if (character >= 'a' && character <= 'z')
    {
        printf("Lower case\n");
    }
    else
    {
        printf("You have not entered a character\n");
    }

    return 0;
}

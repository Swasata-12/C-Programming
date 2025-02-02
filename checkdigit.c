#include <stdio.h>

/*Write a program to check if the given character is a digit or not.*/

int main()
{
    char character;
    printf("Enter the character:\n");
    scanf("%c", &character);
    if (character >= '0' && character <= '9')
    {
        printf("It is a digit");
    }
    else
    {
        printf("It is not a digit");
    }

    return 0;
}

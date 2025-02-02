#include <stdio.h>

/*Write a program to take input a string from the user by %c.*/

int main()
{
    char name[100];
    char ch;
    printf("Enter the character one by one\n");
    int i = 0;
    while (ch != '\n')                //This acts as gets() or fgets()
    {
        scanf("%c", &ch);
        name[i] = ch;
        i++;
    }

    name[i] = '\0';
    puts(name);

    return 0;
}

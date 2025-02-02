#include <stdio.h>

/*Write a program to take a string input from the user and display it on the screen.*/

int main()
{
    char name[50];
    printf("Enter the name:\n");
    gets(name);
    printf("The given name is\n");
    puts(name); // we can also use printf("%s", name);
    return 0;
}

#include <stdio.h>
#include <string.h>

/*Write a program to print each character of a string in a new line.*/

/*int main()
{
    char name[50];
    int i;
    printf("Enter the string:\n"); 
    gets(name);
    for (i = 0; name[i] != '\0'; i = i + 1)   without using strlen() function
    {
        printf("%c\n", name[i]);
    }

    return 0;
}*/

int main()
{
    char name[50];
    int i, l;
    printf("Enter the string:\n");
    gets(name);           
    l = strlen(name);                  // using strlen() function
    for (i = 0; i < l; i = i + 1)    
    {
        printf("%c\n", name[i]);
    }

    return 0;
}

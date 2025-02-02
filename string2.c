#include <stdio.h>
#include <string.h>

/*Write a program to input a string and count how many characters are present.*/

// int main()
// {
//     char name[50];
//     int i;
//     printf("Enter the name:\n");
//     gets(name);
//     for (i = 0; name[i] != '\0'; i++)
//         ;
//     printf("%d", i);

//     return 0;
// }

int main()
{
    char name[50];
    int i;
    printf("Enter the name:\n"); // using strlen() function
    gets(name);
    i = strlen(name);
    printf("%d", i);
    return 0;
}

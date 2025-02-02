#include <stdio.h>
#include <string.h>

/*Write a program to find the salted form of a password entered by user if the salt is "123" and added
at the end.*/

int main()
{
    char newpassword[200], oldpassword[100], salt[] = "123";
    printf("Enter your password:\n");
    scanf("%s", oldpassword);
    strcpy(newpassword, oldpassword);
    strcat(newpassword, salt);
    printf("After salting the new password is:\n");
    puts(newpassword);
    return 0;
}

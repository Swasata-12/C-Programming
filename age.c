#include <stdio.h>
//Write a program to input age and print Adult or Minor
int main()
{
    int n;
    printf("Enter the age:\n");
    scanf("%d", &n);
    if (n > 18)
    {
        printf("Adult");
    }
    else
    {
        printf("Minor");
    }
    return 0;
}
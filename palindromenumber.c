#include <stdio.h>

/*Write a program to take a number from the user and check if it is a palindrome no or not.*/

int isPalindrome(int num)
{
    int j, m, s = 0;
    j = num;
    while (j > 0)
    {
        m = j % 10;
        s = (s * 10) + m;
        j = j / 10;
    }
    printf("The reversed number is %d\n", s);
    if (s == num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int number;
    printf("Enter a number to check whether it is a Palindrome or not\n");
    scanf("%d", &number);
    if (isPalindrome(number) == 1)
    {
        printf("The number is a Palindrome");
    }
    else
    {
        printf("The number is not a Palindrome");
    }

    return 0;
}

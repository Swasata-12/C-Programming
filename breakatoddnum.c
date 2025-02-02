#include <stdio.h>

/*Write a program to keep taking inputs from the user until user enters an odd number.*/

int main()
{
    int n;
    while (1)
    {
        printf("Enter a number:\n");
        scanf("%d", &n);
        if (n % 2 != 0)
        {
            printf("You have entered a odd number\n");
            break;
        }
    }

    return 0;
}

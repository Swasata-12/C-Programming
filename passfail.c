#include <stdio.h>

/*Write a program to check if a student passed or failed.
marks>30 is pass
marks<30 is fail*/

int main()
{
    int n, i;
    for (i = 1; i <= 10; i++)
    {
        printf("Enter the marks of %d student\n", i);
        scanf("%d", &n);
        if (n > 30)
        {
            printf("Passed\n");
        }
        else
        {
            printf("Failed\n");
        }
    }

    return 0;
}

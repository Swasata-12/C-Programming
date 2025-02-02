#include <stdio.h>

/*Write a program to give grades to a student.*/

int main()
{
    int i, marks;
    printf("Enter the marks of 10 students one by one:\n");
    for (i = 0; i < 10; i++)
    {
        printf("Enter the marks of %d student\n", i + 1);
        scanf("%d", &marks);
        if (marks >= 90 && marks <= 100)
        {
            printf("Grade A+");
        }
        else if (marks >= 70 && marks < 90)
        {
            printf("Grade A");
        }
        else if (marks >= 30 && marks < 70)
        {
            printf("Grade B");
        }
        else if (marks < 30)
        {
            printf("Grade C");
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

/*Write a program using function to calculate the percentage of a student from marks in
science, maths and sanskrit.*/

float percentage(void)
{
    float science, maths, sanskrit, percentage;
    printf("Enter the marks in Science\n");
    scanf("%f", &science);

    printf("Enter the marks in Maths\n");
    scanf("%f", &maths);

    printf("Enter the marks in Sanskrit\n");
    scanf("%f", &sanskrit);
    
    percentage = ((science + maths + sanskrit) / 3);
    return percentage;
}

int main()
{
    float p;
    p = percentage();
    printf("The percentage is %0.2f\n", p);
    return 0;
}

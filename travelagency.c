#include<stdio.h>

/*Write a program for Travel Agency Manager.
You manage a travel agency and you want your n drivers to input their following details
one by one:
1. Name
2. Driving Licence Number      Let n=3 (use structure)
3. Route 
4. Kms */

typedef struct Driver
{
    char name[34];
    char dlNo[45];
    char route[47];
    int kms;
}dr;

int main()
{
    dr d1,d2,d3;

    printf("Enter the details of the driver no 1:\n");
    printf("Enter the name of first driver\n");
    gets(d1.name);
    printf("Enter the dlNo of first driver\n");
    gets(d1.dlNo);
    printf("Enter the route of first driver\n");
    gets(d1.route);
    printf("Enter the number of Kms of first driver\n");
    scanf("%d", &d1.kms);
    getchar();

    printf("Enter the details of the driver no 2:\n");
    printf("Enter the name of second driver\n");
    gets(d2.name);
    printf("Enter the dlNo of second driver\n");
    gets(d2.dlNo);
    printf("Enter the route of second driver\n");
    gets(d2.route);
    printf("Enter the number of Kms of second driver\n");
    scanf("%d", &d2.kms);
    getchar();

    printf("Enter the details of the driver no 3:\n");
    printf("Enter the name of third driver\n");
    gets(d3.name);
    printf("Enter the dlNo of third driver\n");
    gets(d3.dlNo);
    printf("Enter the route of third driver\n");
    gets(d3.route);
    printf("Enter the number of Kms of third driver\n");
    scanf("%d", &d3.kms);
    getchar();

    printf("******Printing Information of these drivers:******\n");

    printf("For Driver No 1:\nName is %s\n", d1.name);
    printf("DL Number is %s\n", d1.dlNo);
    printf("Route is %s\n", d1.route);
    printf("Kms is %d\n\n", d1.kms);

    printf("For Driver No 2:\nName is %s\n", d2.name);
    printf("DL Number is %s\n", d2.dlNo);
    printf("Route is %s\n", d2.route);
    printf("Kms is %d\n\n", d2.kms);

    printf("For Driver No 3:\nName is %s\n", d3.name);
    printf("DL Number is %s\n", d3.dlNo);
    printf("Route is %s\n", d3.route);
    printf("Kms is %d\n\n", d3.kms);

    return 0;
}

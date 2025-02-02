#include <stdio.h>

/*write a program to store adress(house no, block, city, state) of 5 people.*/

typedef struct adress
{
    int housenumber;
    char block;
    char city[20];
    char state[50];
} ads;

int main()
{
    ads citizen[5]; // Array of structure
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the adress of %d citizen:\n", i + 1);
        printf("Enter the House number\n");
        scanf("%d", &citizen[i].housenumber);
        getchar();
        printf("Enter the block\n");
        scanf("%c", &citizen[i].block);
        getchar();
        printf("Enter the city\n");
        gets(citizen[i].city);
        printf("Enter the state\n");
        gets(citizen[i].state);
        printf("\n");
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Details of the %d citizen\n", i + 1);
        printf("House number is: %d\n", citizen[i].housenumber);
        printf("Block is: %c\n", citizen[i].block);
        printf("City is: %s\n", citizen[i].city);
        printf("State is: %s\n", citizen[i].state);
        printf("\n");
    }

    return 0;
}

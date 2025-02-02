#include <stdio.h>
#include <stdlib.h>

/* Write a menu driven C program on Circular linked list to Create, Display, */
struct node
{
    int data;
    struct node *next;
};
struct node *head;

// Create a node in circular linked list
void create()
{
    struct node *newnode, *temp;
    int choice;
    head = 0;
    while (choice != 0)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data\n");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        temp->next = head;
        printf("Do you want to continue?\t Press 1 to continue and 0 to end\n");
        scanf("%d", &choice);
    }
}

int main()
{
    int option;
    while (1)
    {
        printf("\n1.Create\n2.Display\n");
        printf("Enter your Option\n");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            create();
            break;

        default:
            printf("You have entered wrong choice\n");
            break;
        }
    }

    return 0;
}

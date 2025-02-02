#include <stdio.h>
#include <stdlib.h>

/* Write a menu driven C program on Doubly Linked list to Create, Display, Insert at Beginning,
Insert at End, Insert at Specified Position, Delete from beginning, Delete from End, Delete from
Specified Position.  */

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head;

// Create a newnode in doubly linked list
void create()
{
    struct node *newnode, *tail;
    int choice;
    head = 0;
    while (choice != 0)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data\n");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        newnode->prev = 0;
        if (head == 0)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
        printf("Do you want to continue?\t Press 1 to continue and 0 to end\n");
        scanf("%d", &choice);
    }
}

// Display the elements of the linked list
void display()
{
    struct node *tail;
    tail = head;
    while (tail != 0)
    {
        printf("%d\t", tail->data);
        tail = tail->next;
    }
    printf("\n");
}

// Insert element at the beginning of the list
void insertatbegin()
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data\n");
    scanf("%d", &newnode->data);
    newnode->prev = 0;
    head->prev = newnode;
    newnode->next = head;
    head = newnode;
}

// Insert element at the end of the list
void insertatEnd()
{
    struct node *newnode, *tail;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data\n");
    scanf("%d", &newnode->data);
    newnode->next = 0;
    /*  tail->next = newnode;
     newnode->prev = tail;
     tail = newnode; */
    tail = head;
    while (tail->next != 0)
    {
        tail = tail->next;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

// Insert at a Specific position
void insertatPos()
{
    int pos, i = 1;
    printf("Enter the Position:\n");
    scanf("%d", &pos);
    if (pos == 1)
    {
        insertatbegin();
    }
    else
    {
        struct node *newnode, *temp;
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data\n");
        scanf("%d", &newnode->data);
        temp = head;
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        newnode->next = temp->next;
        newnode->prev = temp;
        temp->next = newnode;
        newnode->next->prev = newnode;
    }
}

// Delete element from the beginning
void delete_begin()
{
    struct node *temp;
    temp = head;
    head = temp->next; // we can also use head->next here
    head->prev = 0;
    free(temp);
}

// Delete element from the end
void delete_end()
{
    struct node *temp, *tail;
    temp = head;
    while (temp->next != 0)
    {
        tail = temp;
        temp = temp->next;
    }
    if (temp == head)
    {
        head = 0;
    }
    else
    {
        tail->next = 0;
    }
    free(temp);
}

// Delete from the specified position
void delete_pos()
{
    struct node *temp;
    int pos, i = 1;
    printf("Enter the Position:\n");
    scanf("%d", &pos);
    temp = head;
    if (pos == 1)
    {
        delete_begin();
    }
    else
    {
        while (i < pos)
        {
            temp = temp->next;
            i++;
        }
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp);
    }
}

int main()
{
    int option;
    while (1)
    {
        printf("\n1.Create\n2.Display\n3.Insert at Beginning\n4.Insert at End\n5.Insert at Specific Position\n6.Delete from Beginning\n7.Delete from End\n8.Delete from Specific Position\n");
        printf("Enter your Option\n");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            create();
            break;
        case 2:
            if (head == 0)
            {
                printf("You have to create a Linked list first\n");
            }
            else
            {
                display();
            }
            break;
        case 3:
            if (head == 0)
            {
                printf("You have to create a Linked list first\n");
            }
            else
            {
                insertatbegin();
            }
            break;
        case 4:
            if (head == 0)
            {
                printf("You have to create a Linked list first\n");
            }
            else
            {
                insertatEnd();
            }
            break;
        case 5:
            if (head == 0)
            {
                printf("You have to create a Linked list first\n");
            }
            else
            {
                insertatPos();
            }
            break;
        case 6:
            if (head == 0)
            {
                printf("You have to create a Linked list first\n");
            }
            else
            {
                delete_begin();
            }
            break;
        case 7:
            if (head == 0)
            {
                printf("You have to create a Linked list first\n");
            }
            else
            {
                delete_end();
            }
            break;
        case 8:
            if (head == 0)
            {
                printf("You have to create a Linked list first\n");
            }
            else
            {
                delete_pos();
            }
            break;
        default:
            printf("You have entered wrong choice\n");
            break;
        }
    }

    return 0;
}

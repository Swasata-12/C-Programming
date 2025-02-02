#include <stdio.h>
#include <stdlib.h>

/*Write a menu driven c program on Linked list to Create, Display, Insert at beginning, Insert at
end, Insert at any specified position, Delete from beginning, Delete from end, Delete from a 
specified position, find the length of the list, Reverse the list.*/

struct node
{
    int data;
    struct node *next;
};
struct node *head;

// Create a newnode in linked list
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
        printf("Do you want to continue?\t Press 1 to continue and 0 to end\n");
        scanf("%d", &choice);
    }
}

// Display the elements of the linked list
void display()
{
    struct node *temp;
    temp = head;
    while (temp != 0)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Insert element at the beginning of the linked list
void insertatbegin()
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data\n");
    scanf("%d", &newnode->data);
    newnode->next = head;
    head = newnode;
}

// Insert element at the end of the linked list
void insertatEnd()
{
    struct node *newnode, *temp;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data\n");
    scanf("%d", &newnode->data);
    newnode->next = 0;
    temp = head;
    while (temp->next != 0)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

// Insert element after a specified position
void insertatPos()
{
    struct node *newnode, *temp;
    int pos, i = 1;
    printf("Enter the position after which you want to insert\n");
    scanf("%d", &pos);
    temp = head;
    while (i < pos)
    {
        temp = temp->next;
        i++;
    }
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data\n");
    scanf("%d", &newnode->data);
    newnode->next = temp->next;
    temp->next = newnode;
}

// Delete element from the beginning
void delete_begin()
{
    struct node *temp;
    temp = head;
    head = temp->next;
    free(temp);
}

// Delete element from the end
void delete_end()
{
    struct node *prevnode, *temp;
    temp = head;
    while (temp->next != 0)
    {
        prevnode = temp;
        temp = temp->next;
    }
    if (temp == head)
    {
        head = 0;
    }
    else
    {
        prevnode->next = 0;
    }
    free(temp);
}

// Delete from the specified position
void delete_pos()
{
    struct node *temp, *nextnode;
    int pos, i = 1;
    printf("Enter the Position of the node:\n");
    scanf("%d", &pos);
    temp = head;
    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }
    nextnode = temp->next;
    temp->next = nextnode->next;
    free(nextnode);
}

// Find the length of the created list
void get_length()
{
    struct node *temp;
    int count = 0;
    temp = head;
    while (temp != 0)
    {
        count++;
        temp = temp->next;
    }
    printf("The length of the linked list is %d\n", count);
}

// Reverse the created list
void reverse()
{
    struct node *prevnode, *currentnode, *nextnode;
    prevnode = 0;
    currentnode = nextnode = head;
    while (nextnode != 0)
    {
        nextnode = nextnode->next;
        currentnode->next = prevnode;
        prevnode = currentnode;
        currentnode = nextnode;
    }
    head = prevnode;
}
int main()
{
    int option;
    while (1)
    {
        printf("\n1.Create\n2.Display\n3.Insert at Beginning\n4.Insert at End\n5.Insert at Specific Position\n6.Delete from Beginning\n7.Delete from End\n8.Delete from Specific Position\n9.Find Length\n10.Reverse the List\n");
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
        case 9:
            if (head == 0)
            {
                printf("The list is empty\n");
            }
            else
            {
                get_length();
            }
            break;
        case 10:
            if (head == 0)
            {
                printf("You have to create a Linked list first\n");
            }
            else
            {
                reverse();
            }
            break;

        default:
            printf("You have entered wrong choice\n");
            break;
        }
    }

    return 0;
}

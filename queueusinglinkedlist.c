#include <stdio.h>
#include <stdlib.h>

/* Write a menu driven C program to implement Queue using linked list.*/

struct node
{
    int data;
    struct node *next;
};
struct node *front = 0, *rear = 0;

// Insert element in the Queue
void enqueue()
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data\n");
    scanf("%d", &newnode->data);
    newnode->next = 0;
    if (front == 0 && rear == 0)
    {
        front = rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
}

// Delete element from the Queue
void dequeue()
{
    struct node *temp;
    temp = front;
    if (front == 0 && rear == 0)
    {
        printf("The Queue is Empty\n");
    }
    else
    {
        front = front->next; // we can also use temp->next here
        free(temp);
    }
}

// View the top element of the Queue
void peek()
{
    if (front == 0 && rear == 0)
    {
        printf("The Queue is Empty\n");
    }
    else
    {
        printf("The First element of the Queue is: %d\n", front->data);
    }
}

// Display the elements of the queue
void display()
{
    struct node *temp;
    if (front == 0 && rear == 0)
    {
        printf("The Queue is Empty\n");
    }
    else
    {
        temp = front;
        printf("The Elements of the Queue are:\n");
        while (temp != 0)
        {
            printf("%d\t", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main()
{
    int option;
    while (1)
    {
        printf("\n1.Enqueue\n2.Dequeue\n3.Peek\n4.Display\n");
        printf("Enter your Option\n");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;

        default:
            printf("Invalid choice\n");
            break;
        }
    }
    return 0;
}

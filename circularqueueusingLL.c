#include <stdio.h>
#include <stdlib.h>

/* Write a menu driven C program to implement Circular Queue using linked list.*/

struct node
{
    int data;
    struct node *next;
};
struct node *front = 0, *rear = 0;

// Insert element in the Circular Queue
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
        rear->next = front;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
        rear->next = front;
    }
}

// Delete element from the Circular Queue
void dequeue()
{
    struct node *temp;
    temp = front;
    if (front == 0 && rear == 0)
    {
        printf("The Queue is Empty\n");
    }
    else if (front == rear)
    {
        front = rear = 0;
        free(temp);
    }

    else
    {
        front = front->next; // we can also use temp->next here
        rear->next = front;
        free(temp);
    }
}

// View the top element of the Circular Queue
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

// Display the elements of the Circular queue
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
        while (temp->next != front)
        {
            printf("%d\t", temp->data);
            temp = temp->next;
        }
        printf("%d\n", temp->data);
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

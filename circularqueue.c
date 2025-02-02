#include <stdio.h>
#define N 5

/* Write a menu driven C program to implement Circular Queue using array.*/

int queue[N];
int front = -1, rear = -1;

// Insert element in the Circular Queue
void enqueue()
{
    int x;
    printf("Enter data\n");
    scanf("%d", &x);
    if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else if ((rear + 1) % N == front)
    {
        printf("Queue is Full\n");
    }
    else
    {
        rear = (rear + 1) % N;
        queue[rear] = x;
    }
}

// Delete element from the Circular Queue
void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        printf("The Dequeued element is %d\n", queue[front]);
        front = (front + 1) % N;
    }
}

// View the top element of the Circular Queue
void peek()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("The First element of the Queue is: %d\n", queue[front]);
    }
}

// Display the elements of the Circular queue
void display()
{
    int i = front;
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("The elements of the Circular Queue are:\n");
        while (i != rear)
        {
            printf("%d\t", queue[i]);
            i = (i + 1) % N;
        }
        printf("%d\n", queue[rear]);
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

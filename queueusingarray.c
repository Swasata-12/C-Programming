#include <stdio.h>
#define N 5

/* Write a menu driven C program to implement Queue using array.*/

int queue[N];
int front = -1, rear = -1;

// Insert element in the Queue
void enqueue()
{
    int x;
    printf("Enter data\n");
    scanf("%d", &x);
    if (rear == N - 1)
    {
        printf("Overflow\n");
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else
    {
        rear++;
        queue[rear] = x;
    }
}

// Delete element from the Queue
void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("Underflow\n");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        printf("The Dequeued element is %d\n", queue[front]);
        front++;
    }
}

// View the top element of the Queue
void peek()
{
    if (front == -1 && rear == -1)
    {
        printf("Underflow\n");
    }
    else
    {
        printf("The First element of the Queue is: %d\n", queue[front]);
    }
}

// Display the elements of the queue
void display()
{
    if (front == -1 && rear == -1)
    {
        printf("Underflow\n");
    }
    else
    {
        printf("The elements of the Queue are:\n");
        for (int i = front; i <= rear; i++)
        {
            printf("%d\t", queue[i]);
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

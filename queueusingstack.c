#include <stdio.h>
#define N 5

/* Write a menu driven C program to implement Queue using Stack.*/

int S1[N], S2[N];
int top1 = -1, top2 = -1, count = 0;

// Pop element from the stack 1
int pop1()
{
    return S1[top1--];
}

// Pop element from the stack 2
int pop2()
{
    return S2[top2--];
}

// Insert element in the stack 2
void push2(int data)
{
    if (top2 == N - 1)
    {
        printf("Overflow\n");
    }
    else
    {
        top2++;
        S2[top2] = data;
    }
}

// Insert element in the stack 1
void push1(int data)
{
    if (top1 == N - 1)
    {
        printf("Overflow\n");
    }
    else
    {
        top1++;
        S1[top1] = data;
    }
}

// Insert element in the queue
void enqueue()
{
    int x;
    printf("Enter Data\n");
    scanf("%d", &x);
    push1(x);
    count++;
}

// Delete element from the queue
void dequeue()
{
    int a, b;
    if (top1 == -1 && top2 == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        for (int i = 0; i < count; i++)
        {
            a = pop1();
            push2(a);
        }
        b = pop2();
        printf("The Dequeued element is %d\n", b);
        count--;
        for (int i = 0; i < count; i++)
        {
            a = pop2();
            push1(a);
        }
    }
}

// Display all the elements of the queue
void display()
{
    printf("The elements of the Stack are:\n");
    for (int i = 0; i <= top1; i++)
    {
        printf("%d\t", S1[i]);
    }
}

// View the top element of the queue
void peek()
{
    if (top1 == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("The top element of the Stack is %d\n", S1[top1]);
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

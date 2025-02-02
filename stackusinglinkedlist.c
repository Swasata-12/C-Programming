#include <stdio.h>
#include <stdlib.h>

/* Write a menru diven C program to implement Stack using Linked list.*/

struct node
{
    int data;
    struct node *next;
};
struct node *top = 0;

// Insert element in the stack
void push()
{
    struct node *newnode;
    // top = 0;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data:\n");
    scanf("%d", &newnode->data);
    newnode->next = top;
    top = newnode;
}

// Pop element from the stack
void pop()
{
    struct node *temp;
    temp = top;
    if (top == 0)
    {
        printf("Underflow\n");
    }
    else
    {
        printf("The Poped out element is %d\n", top->data);
        top = top->next;
        free(temp);
    }
}

// View the top element of the stack
void peek()
{
    if (top == 0)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("The element at the Stacktop is %d\n", top->data);
    }
}

// Display the elements of the stack
void display()
{
    struct node *temp;
    temp = top;
    if (top == 0)
    {
        printf("List is empty\n");
    }
    else
    {
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
        printf("\n1.Push\n2.Pop\n3.Peek\n4.Display\n");
        printf("Enter your Option\n");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
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

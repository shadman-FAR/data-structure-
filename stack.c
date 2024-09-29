#include <stdio.h>

int stack[10];
int top = -1;
int pop();
void print();
void push(int);

int main()
{
    printf("Listed elements are: ");
    push(44);
    push(6);
    push(10);
    push(7);

    printf("\nTop element: %d\n", stack[top]);

    int a, option, element;
    do
    {
        printf("1) Push \n2) Pop \n3) Print \n4) Exit\n");

        scanf("%d", &option);

        switch (option)
        {
        case 1:
            printf("Enter element to push: ");
            scanf("%d", &element);
            push(element);
            break;

        case 2:
            element = pop();
            if (element != -1)
            {
                printf("Popped element: %d\n", element);
            }
            print();
            break;

        case 3:
            print();
            break;

        case 4:
            printf("Exiting program...\n");
            break;

        default:
            printf("Invalid option! Please try again.\n");
        }
    } while (option != 4);

    printf("Exit : ");
    scanf("%d", &a);
    return 0;
}

void push(int element)
{
    if (top == 10 - 1)
    {
        printf("Overflow\n");
    }
    else
    {
        stack[++top] = element;
    }

    printf("%d ", element);
}

int pop()
{
    if (top == -1)
    {
        printf("Underflow\n");
        return -1;
    }
    return stack[top--];
}

void print()
{
    if (top == -1)
    {
        printf("Empty stack\n");
    }
    else
    {
        printf("Stack elements: ");
        for (int i = top; i >= 0; i--)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

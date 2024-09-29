#include <stdio.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top = NULL;
void push()
{
    int x;
    printf("Enter Element : ");
    scanf("%d", &x);
    struct node *new;
    new = (struct node *)malloc(sizeof(struct node));
    new->data = x;
    new->next = top;
    top = new;
}
void pop()
{
    struct node *t;
    if (top == NULL)
        printf("Under flow");
    else
    {
        t = top;
        top = top->next;
        printf("Popped ELement :%d\n", t->data);
        free(t);
        t = NULL;
    }
}
void print()
{
    struct node *p;
    p = top;
    while (p != NULL)
    {
        printf("%d\n", p->data);
        p = p->next;
    }
}
int main()
{
    int choice;
    char ch;
    do
    {
printf("1) Push \n2) Pop \n3) Print \n4) Exit\n ");
scanf("%d",&choice);
switch(choice)
{
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            print();
            break;
        case 4:
            printf("Successfully Exit !");
            return 0;
            break;
        default:
            printf("Envalid\n");
            break;
}
printf("Enter p for continue : ");
ch=getchar();
ch=getchar();
    } while (ch=='p'||ch=='P');
    return 0;
}

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *s;
void delete_beg(struct node **S)
{
    struct node *p;
    if (s == NULL)
    {
        printf("Under flow");
        return;
    }
    p = s;
    s = p->next;
    free(p);
}
void main()
{
    struct node *p, *q;
    char ch;
    p = (struct node *)malloc(sizeof(struct node));
    printf("Enter first node data\n");
    scanf("%d", &p->data);
    s = p;
    do
    {
        q = (struct node *)malloc(sizeof(struct node));
        printf("Enter value of next node\n");
        scanf("%d", &q->data);
        p->next = q;
        p = q;
        printf("press Y for add new node \n");
        ch = getch();
    } while (ch == 'y');
    p->next = NULL;
    delete_beg(&s);
    printf("list of data are\n");
    while (s != NULL)
    {
        printf("%d\n", s->data);
        s = s->next;
    }
    getch();
}
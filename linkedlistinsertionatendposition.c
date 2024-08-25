#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *s;
void insert_end(struct node **S)
{
    struct node *t, *first;
    t = (struct node *)malloc(sizeof(struct node));
    printf("Enter new node data at End\n");
    scanf("%d", &t->data);
    first = s;
    while (s->next != NULL)
    {
        s = s->next;
    }
    s->next = t;

    t->next = NULL;
    s = first;
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
        ch = getchar();
        ch = getchar();
    } while (ch == 'y');
    p->next = NULL;
    insert_end(&s);
    printf("list of data are\n");
    while (s != NULL)
    {
        printf("%d\n", s->data);
        s = s->next;
    }
    getchar();
}
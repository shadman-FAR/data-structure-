#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *s;
void delete_specific(struct node **S)
{
    int key;
    struct node *t, *first;
    printf("Enter Element to delete\n");
    scanf("%d", &key);
    first = s;
    while (s->data != key)
    {
        t = s;
        s = s->next;
    }
    t->next = s->next;
    free(s);
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
    delete_specific(&s);
    printf("list of data are\n");
    while (s != NULL)
    {
        printf("%d\n", s->data);
        s = s->next;
    }
    getchar();
}
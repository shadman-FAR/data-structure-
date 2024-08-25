#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *s;
void main()
{
    struct node *p, *q;
    char ch;
    p = (struct node *)malloc(sizeof(struct node));
    printf("Enter first value\n");
    scanf("%d", &p->data);
    s = p;
    do
    {
        q = (struct node *)malloc(sizeof(struct node));
        printf("Enter value of next node\n");
        scanf("%d", &q->data);
        p->next = q;
        p = q;
        printf("press Y for new node OR press any key for output\n");
        ch = getch();
    } while (ch == 'y');
    p->next = NULL;
    printf("Values are\n");
    while (s != NULL)
    {
        printf("%d\n", s->data);
        s = s->next;
    }
    getch();
}
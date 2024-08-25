#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

void insert_after(struct node** head) {
    int key;
    struct node *current, *new_node;
    
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }

    printf("Enter element after which you want to insert: ");
    scanf("%d", &key);

    current = *head;
    while (current != NULL && current->data != key) {
        current = current->next;
    }

    if (current == NULL) {
        printf("Element %d not found in the list.\n", key);
        return;
    }

    new_node = (struct node*)malloc(sizeof(struct node));
    if (new_node == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }

    printf("Enter new node data: ");
    scanf("%d", &new_node->data);

    new_node->next = current->next;
    current->next = new_node;
}

void print_list(struct node* head) {
    while (head != NULL) {
        printf("%d\n", head->data);
        head = head->next;
    }
}

int main() {
    struct node *head = NULL, *p = NULL, *q = NULL;
    char ch;
    
    // Create the first node
    p = (struct node*)malloc(sizeof(struct node));
    if (p == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter first node data: ");
    scanf("%d", &p->data);
    p->next = NULL;
    head = p;

    // Create the rest of the nodes
    do {
        q = (struct node*)malloc(sizeof(struct node));
        if (q == NULL) {
            printf("Memory allocation failed.\n");
            return 1;
        }

        printf("Enter value of next node: ");
        scanf("%d", &q->data);
        q->next = NULL;

        p->next = q;
        p = q;

        printf("Press Y to add a new node, any other key to stop: ");
        scanf(" %c", &ch); 
    } while (ch == 'Y' || ch == 'y');

    // Insert new node after a given element
    insert_after(&head);

    // Print the list
    printf("List of data:\n");
    print_list(head);

    return 0;
}

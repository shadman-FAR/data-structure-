#include <stdio.h>
#define MAX 50

typedef struct Queue {
    int front, rear;
    int arr[MAX];
} Queue;

void initializeQueue(Queue *q) {
    q->front = -1;
    q->rear = -1;
}

void enqueue(Queue *q, int value) {
    if (q->rear == MAX - 1) {
        printf("Queue Overflow! Cannot add more elements.\n");
        return;
    }
    if (q->front == -1) q->front = 0;
    q->arr[++q->rear] = value;
    printf("%d added to the queue.\n", value);
}

void dequeue(Queue *q) {
    if (q->front == -1 || q->front > q->rear) {
        printf("Queue Underflow! No elements to delete.\n");
        return;
    }
    printf("%d removed from the queue.\n", q->arr[q->front]);
    q->front++;
}

// Print the queue
void printQueue(Queue *q) {
    if (q->front == -1 || q->front > q->rear) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = q->front; i <= q->rear; i++) {
        printf("%d ", q->arr[i]);
    }
    printf("\n");
}

int main() {
    Queue q;
    initializeQueue(&q);

    int choice, value;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Add (Enqueue)\n");
        printf("2. Delete (Dequeue)\n");
        printf("3. Print\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to enqueue: ");
                scanf("%d", &value);
                enqueue(&q, value);
                break;
            case 2:
                dequeue(&q);
                break;
            case 3:
                printQueue(&q);
                break;
            case 4:
                printf("Exiting the program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}

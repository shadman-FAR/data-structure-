#include <stdio.h>

int main() {
    int i, n, a[100], star, mid, high, low, found = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter the sorted elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Element you want to find: ");
    scanf("%d", &star);

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = low + (high - low) / 2; 

        if (a[mid] == star) {
            found = 1;
            printf("Element is present at position %d\n", mid + 1);
            break;
        } else if (star < a[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    if (!found) {
        printf("Element not found\n");
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int i, found = 0, n, x;

    printf("Enter the size of Array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to be found : ");
    scanf("%d", &x);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            found = 1;
            printf("Element %d found at index %d", x, i + 1);
            break;
        }
    }
    if (found == 0)
    {
        printf("numbre %d not found in array", x);
    }
    return 0;
}
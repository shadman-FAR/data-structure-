#include <stdio.h>
int main()
{

    int n, p = 0, s;

    printf("Enter size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter element of  array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("first element to be deleted :\n", p);

    for (int i = p - 1; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n -= 1;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
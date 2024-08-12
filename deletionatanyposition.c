#include <stdio.h>

int main()
{
    int n, p, i, s;

    printf("Enter number of elements in array\n");
    scanf("%d", &n);

    int array[n];
    printf("Enter  elements\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Enter index for deletion:\n");
    scanf("%d", &p);

    for (i = p - 1; i < n - 1; i++)
    {
        array[i] = array[i + 1];
    }
    n = n - 1;
    printf("array after opretion:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d\n", array[i]);
    }
    return 0;
}

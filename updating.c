#include <stdio.h>
int main()
{
    int n, i, index, num;

    printf("Enter size of array\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter array elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter index of element\n");
    scanf("%d", &index);
    index=index-1;
    printf("Enter updating element\n");
    scanf("%d", &num);
    a[index] = num;


    printf("updated array elements are\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}
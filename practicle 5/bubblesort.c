#include <stdio.h>
int main()
{
    int i, j, n, temp;
    printf("enter array size: ");
    scanf("%d", &n);
    int array[n];
    printf("enter element of array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    printf("array after sorting:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", array[i]);
    }

    return 0;
}
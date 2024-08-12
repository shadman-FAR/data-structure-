#include <stdio.h>

int main()
{
   int n, i, s;
   printf("enter number of elements in array\n");
   scanf("%d", &n);
   int array[n + 1];
   printf("enter the array elements\n");

   for (i = 0; i < n; i++)
   {
      scanf("%d", &array[i]);
   }
   printf("enter the number to insert\n");
   scanf("%d", &s);

   n = n + 1;

   array[n - 1] = s;

   printf("after updating  array is\n");

   for (i = 0; i < n; i++)
   {

      printf("%d\n", array[i]);
   }
   return 0;
}

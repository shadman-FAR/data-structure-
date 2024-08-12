#include <stdio.h>

int main()
{
   int n, c, i, s;
   printf("enter number of elements in array:\n");
   scanf("%d", &n);
   int array[n + 100];
   printf("enter the array elements:\n");
   // scanf("%d", &n);

   for (i = 0; i < n; i++)
   {
      scanf("%d", &array[i]);
   }

   printf("enetr the index you have update that;\n");
   scanf("%d", &c);

   printf("enter the number to insert:\n");
   scanf("%d", &s);

   for (i = n - 1; i >= c - 1; i--)
   {
      array[i + 1] = array[i];
   }
   array[c - 1] = s;

   printf("after updating  array is:\n");

   for (i = 0; i <= n; i++)
   {

      printf("%d\n", array[i]);
   }
   return 0;
}

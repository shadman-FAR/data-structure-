#include <stdio.h>
int main()
{
  int n, s;
  printf("Enter size of array: ");
  scanf("%d", &n);
  int a[n];
  printf("Enter element of array:\n");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  printf("Enter element to be inserted: ");
  scanf("%d", &s);
  for (int i = n; i > 0; i--)
  {
    a[i] = a[i - 1];
  }
  a[0] = s;
  printf("array after inserting element at first position:\n");
  for (int i = 0; i < n; i++)
  {
    printf("%d\n", a[i]);
  }
  return 0;
}
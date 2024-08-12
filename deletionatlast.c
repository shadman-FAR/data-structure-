#include<stdio.h>
int main()
{
int i,h,n,m;
printf ("array size: ");
scanf("%d",&n);
int a[n];
printf("enter the array element\n" );
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("after deletion of the last element\n");

n = n-1;  

for(i=0;i<n;i++)
{
    printf("%d  ",a[i]);
}

return 0;
}

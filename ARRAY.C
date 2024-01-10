#include<stdio.h>
int main()
{
int i,n,arr[100];
clrscr();
printf("Enter the range of the numbers and enter the numbers:\n");
scanf("%d",&n);
for (i=0;i<n;i++)
{
scanf("%d",&arr[i]);
printf("%d\t",arr[i]);
}
return 0;
}

#include<stdio.h>
void sum(int);
int main()
{
int arr[]={1,2,3,4,5};
sum(arr);
return 0;
}
void sum(int a[])
{
int sum=0,i;
for(i=0;i<5;i++)
{
sum=sum+x[i];
}
printf("Sum=%d",sum);
}
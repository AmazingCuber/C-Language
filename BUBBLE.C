#include<stdio.h>
int main()
{
int a[6]={97,30,63,92,74,102},i,j,temp;
clrscr();
for(i=0;i<6;i++)
{
for(j=i+1;j<6;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("Modified Array List=");
for(i=0;i<6;i++)
{
printf("%d ",a[i]);
}
return 0;
}
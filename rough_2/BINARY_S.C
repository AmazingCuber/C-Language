#include<stdio.h>
int main()
{
int a[10]={20,36,49,62,85,98,115,236,330,345},key=98,i,low=0,high=9,mid;
clrscr();
for(i=0;i<10;i++)
{
mid=(low+high)/2;
if((a[mid]) == key)
{
printf("%d is the index",mid);
break;
}
if(key<(a[mid]))
high=mid-1;
if(key>(a[mid]))
low=mid+1;
}
return 0;
}
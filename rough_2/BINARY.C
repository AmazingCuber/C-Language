#include<stdio.h>
int main()
{
int a[6]={10,20,30,40,50,60},mid,low,high,i,key=50;
clrscr();
low=0;
high=5;
mid=(low+high)/2;
while(low<high)
{
if(key>a[mid])
low=mid+1;
else if(key==a[mid])
{
printf("%d is found at index %d",key,mid);
break;
}
else
high=mid-1;
mid=(high+low)/2;
}
if(low==high)
printf("%d is not found",key);
return 0;
}

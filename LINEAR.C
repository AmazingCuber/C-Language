#include<stdio.h>
int main()
{
int a[10]={1,2,3,4,5,6,7,8,9,10},i,key=8,flag=0;
clrscr();
for(i=0;i<10;i++)
{
if(a[i]==key)
{
printf("%d element is at index %d",key,i);
flag++;                                    //flag=1 at 8
}
}
if(flag==0)
printf("Element %d is not found",key);
return 0;
}

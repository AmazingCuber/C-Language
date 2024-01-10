#include<stdio.h>
int main()
{
int a[10]={10,20,30,40,50,60,70,80,90,100},i,size,key=60,flag=0;
clrscr();
size=sizeof(a)/sizeof(a[0]);
for(i=0;i<size;i++)
{
if(a[i] == key)
{
printf("%d is the index of %d",i,key);
flag++;
break;
}
}
if(flag == 0)
printf("-1 is the index");
return 0;
}
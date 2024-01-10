#include<stdio.h>
int fibb(int x,int y,int z);
int main()
{
int a=0,b=1,n;
scanf("%d",&n);
printf("Fibonacci Series: ");
fibb(a,b,n);
return 0;
}
int fibb(int x,int y,int z)
{
if(z>0)
{
printf("%d ",x);
return fibb(y,y+x,z=z-1)
}
return 1;
}
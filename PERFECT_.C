#include<stdio.h>
int main()
{
int a,sum,b,limit;
printf("Enter the limit\n");
scanf("%d",&limit);
for(a=1;a<=limit;a++)
{
sum=0;
for(b=1;b<a;b++)
{
if(a%b==0)
sum=sum+b;
}
if(a==sum)
printf("%d is a perfect number\n",a);
}
return 0;
}